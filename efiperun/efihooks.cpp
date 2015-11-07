/**
 * uefireverse - Tools to help with Reverse Engineering UEFI-based firmware
 * Copyright (C) 2015  Jethro G. Beekman
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include <execinfo.h>
#include <string.h>

#include <list>
#include <unordered_map>
using std::list;
using std::unordered_multimap;
using std::pair;
using std::make_pair;
using std::char_traits;

// Seriously, there is no default way to do this?
template<class Iter>
struct iter_pair_range : std::pair<Iter,Iter> {
    iter_pair_range(std::pair<Iter,Iter> const& x)
    : std::pair<Iter,Iter>(x)
    {}
    Iter begin() const {return this->first;}
    Iter end()   const {return this->second;}
};

template<class Iter>
inline iter_pair_range<Iter> as_range(std::pair<Iter,Iter> const& x)
{ return iter_pair_range<Iter>(x); }

#include "main.h"
#include "stubs.h"
#include "efihooks.hpp"

typedef struct _EFI_DEBUG_MASK_PROTOCOL {
	INT64 Revision;
	void* GetDebugMask;
	void* SetDebugMask;
} EFI_DEBUG_MASK_PROTOCOL;

typedef struct _EFI_SMM_BASE_PROTOCOL {
	void* Register;
	void* UnRegister;
	void* Communicate;
	void* RegisterCallback;
	void* InSmm;
	void* SmmAllocatePool;
	void* SmmFreePool;
	void* GetSmstLocation;
} EFI_SMM_BASE_PROTOCOL;

typedef struct _EFI_SMM_SYSTEM_TABLE {
	EFI_TABLE_HEADER         Hdr;
	CHAR16                   *SmmFirmwareVendor;
	UINT32                   SmmFirmwareRevision;
	void*                    SmmInstallConfigurationTable;
	EFI_GUID                 EfiSmmCpuIoGuid;
	void*                    SmmIo;
	void*                    SmmAllocatePool;
	void*                    SmmFreePool;
	void*                    SmmAllocatePages;
	void*                    SmmFreePages;
    void*                    SmmStartupThisAp;
	UINTN                    CurrentlyExecutingCpu;
	UINTN                    NumberOfCpus;
	void                     *CpuSaveState;
	void                     *CpuOptionalFloatingPointState;
	UINTN                    NumberOfTableEntries;
	EFI_CONFIGURATION_TABLE  *SmmConfigurationTable;
} EFI_SMM_SYSTEM_TABLE;

typedef struct _EFI_HII_DATABASE_PROTOCOL {
	void* NewPackageList;
	void* RemovePackageList;
	void* UpdatePackageList;
	void* ListPackageLists;
	void* ExportPackageLists;
	void* RegisterPackageNotify;
	void* UnregisterPackageNotify;
	void* FindKeyboardLayouts;
	void* GetKeyboardLayout;
	void* SetKeyboardLayout;
	void* GetPackageListHandle;
} EFI_HII_DATABASE_PROTOCOL;

typedef struct _EFI_ACPI_SUPPORT_PROTOCOL {
	void* GetAcpiTable;
	void* SetAcpiTable;
	void* PublishTables;
} EFI_ACPI_SUPPORT_PROTOCOL; 

typedef struct __attribute__((packed)) {
	UINT8 Type;
	UINT8 SubType;
	UINT8 Length[2];
} EFI_DEVICE_PATH_PROTOCOL;

typedef struct {
	UINT32                   Revision;
	EFI_HANDLE               ParentHandle;
	EFI_SYSTEM_TABLE         *SystemTable;
	EFI_HANDLE               DeviceHandle;
	EFI_DEVICE_PATH_PROTOCOL *FilePath;
	VOID                     *Reserved;
	UINT32                   LoadOptionsSize;
	VOID                     *LoadOptions;
	VOID                     *ImageBase;
	UINT64                   ImageSize;
	EFI_MEMORY_TYPE          ImageCodeType;
	EFI_MEMORY_TYPE          ImageDataType;
	VOID*                    Unload;
} EFI_LOADED_IMAGE_PROTOCOL;

typedef struct {
	void* data;
	UINTN data_size;
	UINT32 attributes;
} variable_data;

EFI_SYSTEM_TABLE g_efi_system_table={};
static SIMPLE_INPUT_INTERFACE g_efi_system_table_ConIn={};
static SIMPLE_TEXT_OUTPUT_INTERFACE g_efi_system_table_ConOut={};
static SIMPLE_TEXT_OUTPUT_INTERFACE g_efi_system_table_StdErr={};
static SIMPLE_TEXT_OUTPUT_MODE g_efi_system_table_ConOut_Mode={};
static EFI_RUNTIME_SERVICES g_efi_system_table_RuntimeServices={};
static EFI_BOOT_SERVICES g_efi_system_table_BootServices={};
static EFI_CONFIGURATION_TABLE g_efi_system_table_ConfigurationTable={};
static EFI_DEBUG_MASK_PROTOCOL g_efi_debug_mask_protocol={};
static EFI_SMM_BASE_PROTOCOL g_efi_smm_base_protocol={};
static EFI_SMM_SYSTEM_TABLE g_efi_smm_system_table={};
static EFI_GRAPHICS_OUTPUT_PROTOCOL g_efi_graphics_output_protocol={};
static EFI_GRAPHICS_OUTPUT_PROTOCOL_MODE g_efi_graphics_output_protocol_Mode={};
static EFI_HII_DATABASE_PROTOCOL g_efi_hii_database_protocol={};
static EFI_ACPI_SUPPORT_PROTOCOL g_efi_acpi_support_protocol={};
static EFI_DEVICE_PATH_PROTOCOL g_empty_efi_device_path_protocol={0x7f,0xff,{0,0}};
static EFI_LOADED_IMAGE_PROTOCOL g_efi_loaded_image_protocol={};

static list<GenericHook<const char*>> g_str_hooks;
static unordered_multimap<EFI_GUID,pair<EFI_HANDLE,void*>> g_interfaces;
static unordered_multimap<EFI_GUID,pair<CHAR16*,variable_data*>> g_variables;

#include "efi_guid.c"

const char* guid_string(EFI_GUID* guid)
{
	static char str[64];
	for (guid_name* p=g_guid_names;p->guid;p++)
	{
		if (*(p->guid)==*guid)
		{
			snprintf(str,sizeof(str),"GUID:%s",p->name);
			return str;
		}
	}
	snprintf(str,sizeof(str),"%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x",guid->Data1,guid->Data2,guid->Data3,guid->Data4[0],guid->Data4[1],guid->Data4[2],guid->Data4[3],guid->Data4[4],guid->Data4[5],guid->Data4[6],guid->Data4[7]);
	return str;
}

static EFI_STATUS print_string(const char** str)
{
	fprintf(stdout,"IGNORE: Called %s\n",*str);
	return EFI_SUCCESS;
}

static void backtrace_exit()
{
	void* ipbuf[80];
	int len=backtrace(ipbuf,80);
	if (len>=0)
	{
		fprintf(stdout,"Aborted. Backtrace:\n");
		char **symbols=backtrace_symbols(ipbuf,len);
		for (int i=0;i<len;i++)
		{
			const memory_block& block=lookup_memory(ipbuf[i]);
			if (block.start)
				printf("  (%2d) %20s+0x%08lx %s\n",i,block.name.c_str(),block.offset,symbols[i]);
			else
				printf("  (%2d) 0x%016lx %s\n",    i,         (intptr_t)ipbuf[i]    ,symbols[i]);
		}
		free(symbols);
	}
	else
	{
		fprintf(stdout,"Aborted. Backtrace failed.\n");
	}
	fflush(stdout);
	fflush(stderr);
	_exit(0);
}

static EFI_STATUS print_string_exit(const char** str)
{
	fprintf(stdout,"Called %s\n",*str);
	backtrace_exit();
}

static EFI_STATUS print_guidindex_exit(GuidIndex* gi)
{
	fprintf(stdout,"Called %s::%d\n",guid_string(&gi->guid),gi->index);
	backtrace_exit();
}

static EFI_STATUS print_args(const char** str,intptr_t a0,intptr_t a1,intptr_t a2,intptr_t a3)
{
	fprintf(stdout,"Called %s / rcx=%016lx rdx=%016lx r8=%016lx r9=%016lx\n",*str,a0,a1,a2,a3);
	return EFI_SUCCESS;
}

void* new_abort_hook(const char* name)
{
	g_str_hooks.emplace_back(name,(HOOKFN_T(,const char*))print_string_exit);
	return g_str_hooks.back().get_func();
}

void* new_dummy_hook(const char* name)
{
	g_str_hooks.emplace_back(name,(HOOKFN_T(,const char*))print_string);
	return g_str_hooks.back().get_func();
}

void* new_print_hook(const char* name)
{
	g_str_hooks.emplace_back(name,(HOOKFN_T(,const char*))print_args);
	return g_str_hooks.back().get_func();
}

void log_protocol(const char* type,EFI_GUID* guid)
{
	fprintf(stdout,"%s Protocol %s\n",type,guid_string(guid));
}

void* find_protocol(EFI_GUID* guid,EFI_HANDLE handle)
{
/*
 * if handle==NULL
 *    return intf        if ∃ (NULL  ,intf) ∈ g_interfaces[guid]
 *    return first(intf) if ∃ ([any] ,intf) ∈ g_interfaces[guid]
 *    return new dummy   if ∅ == g_interfaces[guid]
 * else
 *    return intf        if ∃ (handle,intf) ∈ g_interfaces[guid]
 *    return intf        if ∃ (NULL  ,intf) ∈ g_interfaces[guid]
 *    return first(intf) if ∃ ([any] ,intf) ∈ g_interfaces[guid]
 *    return new dummy   if ∅ == g_interfaces[guid]
 */
	void* nullintf=NULL;
	void* firstintf=NULL;
	for (auto& elem : as_range(g_interfaces.equal_range(*guid)))
	{
		auto& el_handle=elem.second.first;
		auto& el_intf=elem.second.second;
		if (el_handle==handle) return el_intf;
		if (el_handle==NULL) nullintf=el_intf;
		if (firstintf==NULL) firstintf=el_intf;
	}
	if (nullintf) return nullintf;
	if (firstintf) return firstintf;
	void *intf=new DummyInterface<80>(guid,(HOOKFN_T(,GuidIndex))print_guidindex_exit);
	fprintf(stdout,"  new dummy @address %016lx\n",(intptr_t)intf);
	g_interfaces.emplace(*guid,make_pair((EFI_HANDLE)NULL,intf));
	return intf;
}

intptr_t count_handles(EFI_GUID* guid)
{
	return g_interfaces.count(*guid);
}

void install_protocol(EFI_GUID* guid,EFI_HANDLE handle,void* interface)
{
	g_interfaces.emplace(*guid,make_pair(handle,interface));
}

void* get_variable(EFI_GUID* guid,CHAR16* name,UINTN* data_size,UINT32 *attributes=NULL)
{
	unsigned int name_len = char_traits<char16_t>::length((char16_t*)name);
	for (auto& elem : as_range(g_variables.equal_range(*guid)))
	{
		auto& el_name=elem.second.first;
		auto& el_var_data=elem.second.second;
		unsigned int el_name_len = char_traits<char16_t>::length((char16_t*)el_name);
		if (el_name_len==name_len && memcmp(el_name,name,name_len*sizeof(char16_t))==0)
		{
			if (data_size) *data_size=el_var_data->data_size;
			if (attributes) *attributes=el_var_data->attributes;
			return el_var_data->data;
		}
	}
	return NULL;
}

void set_variable(EFI_GUID* guid,const CHAR16* name,void* data,UINTN data_size,UINT32 attributes=EFI_VARIABLE_RUNTIME_ACCESS)
{
	unsigned int var_name_len_bytes = char_traits<char16_t>::length((char16_t*)name)*sizeof(char16_t);
	CHAR16* var_name = (CHAR16*)malloc(var_name_len_bytes);
	memcpy(var_name,name,var_name_len_bytes);
	variable_data* var_data = new variable_data;
	var_data->data=malloc(data_size);
	memcpy(var_data->data,data,data_size);
	var_data->data_size = data_size;
	var_data->attributes=attributes;
	g_variables.emplace(*guid,make_pair(var_name,var_data));
}

void char16_print(const char* prefix, CHAR16* str)
{
	fputs(prefix,stdout);
	mbstate_t state={};
	char mb[16];
	if (MB_CUR_MAX>16)
	{
		fprintf(stderr,"MB_CUR_MAX too large: %lu!\nAborted\n",MB_CUR_MAX);
		_exit(0);
	}
	while (*str)
	{
		memset(mb,0,sizeof(mb));
		int ret=wcrtomb(mb, *(str++), &state);
		for (int i=0;i<ret;i++)
		{
			if (mb[i]=='\n')
				fprintf(stdout,"\n%s",prefix);
			else if (mb[i]<' ')
				continue;
			else
				fputc(mb[i],stdout);
		}
	}
	fprintf(stdout,"\n");
}

void* get_smst()
{
	return &g_efi_smm_system_table;
}

void efi_hooks_init()
{
	DUMMYHOOK(g_efi_system_table_RuntimeServices,GetTime);
	ABORTHOOK(g_efi_system_table_RuntimeServices,SetTime);
	ABORTHOOK(g_efi_system_table_RuntimeServices,GetWakeupTime);
	ABORTHOOK(g_efi_system_table_RuntimeServices,SetWakeupTime);
	ABORTHOOK(g_efi_system_table_RuntimeServices,SetVirtualAddressMap);
	ABORTHOOK(g_efi_system_table_RuntimeServices,ConvertPointer);
	g_efi_system_table_RuntimeServices.GetVariable=GetVariable;
	ABORTHOOK(g_efi_system_table_RuntimeServices,GetNextVariableName);
	g_efi_system_table_RuntimeServices.SetVariable=SetVariable;
	g_efi_system_table_RuntimeServices.GetNextHighMonotonicCount=GetNextHighMonotonicCount;
	ABORTHOOK(g_efi_system_table_RuntimeServices,ResetSystem);
	DUMMYHOOK(g_efi_system_table_BootServices,RaiseTPL);
	DUMMYHOOK(g_efi_system_table_BootServices,RestoreTPL);
	g_efi_system_table_BootServices.AllocatePages=AllocatePages;
	ABORTHOOK(g_efi_system_table_BootServices,FreePages);
	ABORTHOOK(g_efi_system_table_BootServices,GetMemoryMap);
	g_efi_system_table_BootServices.AllocatePool=AllocatePool;
	DUMMYHOOK(g_efi_system_table_BootServices,FreePool);
	DUMMYHOOK(g_efi_system_table_BootServices,CreateEvent);
	ABORTHOOK(g_efi_system_table_BootServices,SetTimer);
	ABORTHOOK(g_efi_system_table_BootServices,WaitForEvent);
	DUMMYHOOK(g_efi_system_table_BootServices,SignalEvent);
	DUMMYHOOK(g_efi_system_table_BootServices,CloseEvent);
	ABORTHOOK(g_efi_system_table_BootServices,CheckEvent);
	g_efi_system_table_BootServices.InstallProtocolInterface=InstallProtocolInterface;
	ABORTHOOK(g_efi_system_table_BootServices,ReinstallProtocolInterface);
	DUMMYHOOK(g_efi_system_table_BootServices,UninstallProtocolInterface);
	g_efi_system_table_BootServices.HandleProtocol=HandleProtocol;
	ABORTHOOK(g_efi_system_table_BootServices,PCHandleProtocol);
	DUMMYHOOK(g_efi_system_table_BootServices,RegisterProtocolNotify);
	ABORTHOOK(g_efi_system_table_BootServices,LocateHandle);
	ABORTHOOK(g_efi_system_table_BootServices,LocateDevicePath);
	ABORTHOOK(g_efi_system_table_BootServices,InstallConfigurationTable);
	ABORTHOOK(g_efi_system_table_BootServices,LoadImage);
	ABORTHOOK(g_efi_system_table_BootServices,StartImage);
	ABORTHOOK(g_efi_system_table_BootServices,Exit);
	ABORTHOOK(g_efi_system_table_BootServices,UnloadImage);
	ABORTHOOK(g_efi_system_table_BootServices,ExitBootServices);
	g_efi_system_table_BootServices.GetNextMonotonicCount=GetNextMonotonicCount;
	ABORTHOOK(g_efi_system_table_BootServices,Stall);
	ABORTHOOK(g_efi_system_table_BootServices,SetWatchdogTimer);
	ABORTHOOK(g_efi_system_table_BootServices,ConnectController);
	ABORTHOOK(g_efi_system_table_BootServices,DisconnectController);
	g_efi_system_table_BootServices.OpenProtocol=(EFI_OPEN_PROTOCOL)HandleProtocol;
	ABORTHOOK(g_efi_system_table_BootServices,CloseProtocol);
	ABORTHOOK(g_efi_system_table_BootServices,OpenProtocolInformation);
	ABORTHOOK(g_efi_system_table_BootServices,ProtocolsPerHandle);
	g_efi_system_table_BootServices.LocateHandleBuffer=LocateHandleBuffer;
	g_efi_system_table_BootServices.LocateProtocol=LocateProtocol;
	g_efi_system_table_BootServices.InstallMultipleProtocolInterfaces=InstallMultipleProtocolInterfaces;
	ABORTHOOK(g_efi_system_table_BootServices,UninstallMultipleProtocolInterfaces);
	ABORTHOOK(g_efi_system_table_BootServices,CalculateCrc32);
	g_efi_system_table_BootServices.CopyMem=CopyMem;
	g_efi_system_table_BootServices.SetMem=SetMem;
	DUMMYHOOK(g_efi_system_table_BootServices,CreateEventEx);
	ABORTHOOK(g_efi_system_table_ConIn,Reset);
	ABORTHOOK(g_efi_system_table_ConIn,ReadKeyStroke);
	ABORTHOOK(g_efi_system_table_ConIn,WaitForKey);
	ABORTHOOK(g_efi_system_table_ConOut,Reset);
	g_efi_system_table_ConOut.OutputString=OutputString;
	ABORTHOOK(g_efi_system_table_ConOut,TestString);
	g_efi_system_table_ConOut.QueryMode=QueryMode;
	ABORTHOOK(g_efi_system_table_ConOut,SetMode);
	DUMMYHOOK(g_efi_system_table_ConOut,SetAttribute);
	DUMMYHOOK(g_efi_system_table_ConOut,ClearScreen);
	ABORTHOOK(g_efi_system_table_ConOut,SetCursorPosition);
	ABORTHOOK(g_efi_system_table_ConOut,EnableCursor);
	ABORTHOOK(g_efi_system_table_StdErr,Reset);
	g_efi_system_table_StdErr.OutputString=OutputString;
	ABORTHOOK(g_efi_system_table_StdErr,TestString);
	g_efi_system_table_StdErr.QueryMode=QueryMode;
	ABORTHOOK(g_efi_system_table_StdErr,SetMode);
	DUMMYHOOK(g_efi_system_table_StdErr,SetAttribute);
	DUMMYHOOK(g_efi_system_table_StdErr,ClearScreen);
	ABORTHOOK(g_efi_system_table_StdErr,SetCursorPosition);
	ABORTHOOK(g_efi_system_table_StdErr,EnableCursor);
	
	g_efi_debug_mask_protocol.Revision=0x00010000;
	DUMMYHOOK(g_efi_debug_mask_protocol,GetDebugMask);
	DUMMYHOOK(g_efi_debug_mask_protocol,SetDebugMask);
	g_interfaces.emplace(gEfiDebugMaskProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_debug_mask_protocol));
	register_memory({&g_efi_debug_mask_protocol,sizeof(g_efi_debug_mask_protocol),"EFI_DEBUG_MASK_PROTOCOL"});

	DUMMYHOOK(g_efi_smm_base_protocol,Register);
	ABORTHOOK(g_efi_smm_base_protocol,UnRegister);
	ABORTHOOK(g_efi_smm_base_protocol,Communicate);
	DUMMYHOOK(g_efi_smm_base_protocol,RegisterCallback);
	g_efi_smm_base_protocol.InSmm=(void*)InSmm;
	ABORTHOOK(g_efi_smm_base_protocol,SmmAllocatePool);
	ABORTHOOK(g_efi_smm_base_protocol,SmmFreePool);
	g_efi_smm_base_protocol.GetSmstLocation=(void*)GetSmstLocation;
	g_interfaces.emplace(gEfiSmmBaseProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_smm_base_protocol));
	register_memory({&g_efi_smm_base_protocol,sizeof(g_efi_smm_base_protocol),"EFI_SMM_BASE_PROTOCOL"});

	ABORTHOOK(g_efi_smm_system_table,SmmInstallConfigurationTable);
	g_efi_smm_system_table.SmmIo=find_protocol(&gEfiSmmCpuIoGuid,NULL);
	ABORTHOOK(g_efi_smm_system_table,SmmAllocatePool);
	ABORTHOOK(g_efi_smm_system_table,SmmFreePool);
	ABORTHOOK(g_efi_smm_system_table,SmmAllocatePages);
	ABORTHOOK(g_efi_smm_system_table,SmmFreePages);
	ABORTHOOK(g_efi_smm_system_table,SmmStartupThisAp);
	// don't register, via GetSmstLocation
	
	DUMMYHOOK(g_efi_graphics_output_protocol,QueryMode);
	ABORTHOOK(g_efi_graphics_output_protocol,SetMode);
	ABORTHOOK(g_efi_graphics_output_protocol,Blt);
	g_efi_graphics_output_protocol.Mode=&g_efi_graphics_output_protocol_Mode;
	g_interfaces.emplace(gEfiGraphicsOutputProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_graphics_output_protocol));
	register_memory({&g_efi_graphics_output_protocol,sizeof(g_efi_graphics_output_protocol),"EFI_GRAPHICS_OUTPUT_PROTOCOL"});

	DUMMYHOOK(g_efi_hii_database_protocol,NewPackageList);
	ABORTHOOK(g_efi_hii_database_protocol,RemovePackageList);
	ABORTHOOK(g_efi_hii_database_protocol,UpdatePackageList);
	ABORTHOOK(g_efi_hii_database_protocol,ListPackageLists);
	ABORTHOOK(g_efi_hii_database_protocol,ExportPackageLists);
	ABORTHOOK(g_efi_hii_database_protocol,RegisterPackageNotify);
	ABORTHOOK(g_efi_hii_database_protocol,UnregisterPackageNotify);
	ABORTHOOK(g_efi_hii_database_protocol,FindKeyboardLayouts);
	ABORTHOOK(g_efi_hii_database_protocol,GetKeyboardLayout);
	ABORTHOOK(g_efi_hii_database_protocol,SetKeyboardLayout);
	ABORTHOOK(g_efi_hii_database_protocol,GetPackageListHandle);
	g_interfaces.emplace(gEfiHiiDatabaseProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_hii_database_protocol));
	register_memory({&g_efi_hii_database_protocol,sizeof(g_efi_hii_database_protocol),"EFI_HII_DATABASE_PROTOCOL"});
	
	g_efi_acpi_support_protocol.GetAcpiTable=(void*)GetAcpiTable;
	g_efi_acpi_support_protocol.SetAcpiTable=(void*)SetAcpiTable;
	ABORTHOOK(g_efi_acpi_support_protocol,PublishTables);
	g_interfaces.emplace(gEfiAcpiSupportProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_acpi_support_protocol));
	register_memory({&g_efi_acpi_support_protocol,sizeof(g_efi_acpi_support_protocol),"EFI_ACPI_SUPPORT_PROTOCOL"});
	
	g_interfaces.emplace(gEfiDevicePathProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_empty_efi_device_path_protocol));
	register_memory({&g_empty_efi_device_path_protocol,sizeof(g_empty_efi_device_path_protocol),"EFI_DEVICE_PATH_PROTOCOL"});

	g_efi_loaded_image_protocol.SystemTable=&g_efi_system_table;
	g_efi_loaded_image_protocol.FilePath=&g_empty_efi_device_path_protocol;
	ABORTHOOK(g_efi_loaded_image_protocol,Unload);
	g_interfaces.emplace(gEfiLoadedImageProtocolGuid,make_pair((EFI_HANDLE)NULL,&g_efi_loaded_image_protocol));
	register_memory({&g_efi_loaded_image_protocol,sizeof(g_efi_loaded_image_protocol),"EFI_LOADED_IMAGE_PROTOCOL"});

	g_efi_system_table.ConIn=&g_efi_system_table_ConIn;
	g_efi_system_table_ConOut.Mode=&g_efi_system_table_ConOut_Mode;
	g_efi_system_table_StdErr.Mode=&g_efi_system_table_ConOut_Mode;
	g_efi_system_table.ConOut=&g_efi_system_table_ConOut;
	g_efi_system_table.StdErr=&g_efi_system_table_StdErr;
	g_efi_system_table.RuntimeServices=&g_efi_system_table_RuntimeServices;
	g_efi_system_table.BootServices=&g_efi_system_table_BootServices;
	g_efi_system_table.ConfigurationTable=&g_efi_system_table_ConfigurationTable;
	g_efi_smm_system_table.SmmConfigurationTable=&g_efi_system_table_ConfigurationTable;
}
