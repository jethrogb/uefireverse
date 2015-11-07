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

#include <stdio.h>
#include <x86intrin.h>
#include <cross-stdarg.h>
#include <unistd.h>
#include <string.h>

#include <vector>
#include <string>
using std::vector;
using std::string;

#include "jemalloc_custom.h"

#include "main.h"
#include "stubs.h"

// NOTE: This is *NOT* for access control. If the PE module wanted to access a 
// certain memory address, it could just do so. This is only a debugging aid.
//
// Things a PE module can currently access this way:
// 1. Pages that the PE module was loaded in
// 2. Pages that were allocated by the PE module (e.g. using AllocatePool)
// 3. The stack
//
// Things a PE module can currently *NOT* access this way:
// 1. Tables, interfaces, etc. preloaded by this program
static bool can_access(void* base, size_t len)
{
	intptr_t lo=((intptr_t)base);
	intptr_t hi=(len+(intptr_t)base);
	
	for (auto range=g_memory_map.find(lo);std::get<2>(range);range=g_memory_map.find(lo))
	{
		if (hi<=std::get<1>(range)) return true;
		lo=std::get<1>(range);
	}
	
	return false;
}

EFI_STATUS EFIAPI HandleProtocol(IN EFI_HANDLE Handle,IN EFI_GUID *Protocol,OUT VOID **Interface)
{
	if (Protocol==NULL) return EFI_INVALID_PARAMETER;
	
	log_protocol("Request",Protocol);
	
	if (Interface==NULL) return EFI_INVALID_PARAMETER;
	
	*Interface=find_protocol(Protocol,Handle);

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI LocateProtocol(IN EFI_GUID *Protocol,IN VOID *Registration OPTIONAL,OUT VOID **Interface)
{
	return HandleProtocol(NULL,Protocol,Interface);
}

EFI_STATUS EFIAPI InstallProtocolInterface(IN OUT EFI_HANDLE *Handle, IN EFI_GUID *Protocol, IN EFI_INTERFACE_TYPE InterfaceType, IN VOID *Interface)
{
	if (InterfaceType!=EFI_NATIVE_INTERFACE) return EFI_INVALID_PARAMETER;
	if (!Protocol) return EFI_INVALID_PARAMETER;
	if (!Handle) return EFI_INVALID_PARAMETER;
	
	log_protocol("Install",Protocol);
	install_protocol(Protocol,*Handle,Interface);
	const memory_block& block=lookup_memory(Interface);
	if (block.start)
		fprintf(stdout,"  @offset %s+%08lx\n",block.name.c_str(),block.offset);
	else
		fprintf(stdout,"  @address %016lx\n",(intptr_t)Interface);

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI InstallMultipleProtocolInterfaces(IN OUT EFI_HANDLE *Handle, ...)
{
	if (!Handle) return EFI_INVALID_PARAMETER;

	ms_va_list ap;
	__ms_va_start(ap, Handle);
	
	for(;;)
	{
		EFI_GUID* Protocol=__ms_va_arg(ap, EFI_GUID*);
		if (!Protocol) break;
		VOID* Interface=__ms_va_arg(ap, VOID*);
		InstallProtocolInterface(Handle,Protocol,EFI_NATIVE_INTERFACE,Interface);
	}
	__ms_va_end(ap);

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI AllocatePool(IN EFI_MEMORY_TYPE PoolType, IN UINTN Size, OUT VOID **Buffer)
{
	if (Buffer==NULL) return EFI_INVALID_PARAMETER;
	
	*Buffer=__jemalloc_malloc(Size);
	
	if (!*Buffer) return EFI_OUT_OF_RESOURCES;

	register_memory({*Buffer,Size,string(find_pe_caller_id())+"::MALLOC"});
	fprintf(stdout,"AllocatePool\n  @address %016lx, size=%lx\n",(intptr_t)*Buffer,Size);

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI AllocatePages(IN EFI_ALLOCATE_TYPE Type, IN EFI_MEMORY_TYPE MemoryType, IN UINTN NoPages, OUT EFI_PHYSICAL_ADDRESS *Memory)
{
	if (Memory==NULL) return EFI_INVALID_PARAMETER;
	
	*Memory=(intptr_t)__jemalloc_malloc(NoPages*4096);
	
	if (!*Memory) return EFI_OUT_OF_RESOURCES;

	register_memory({(void*)*Memory,NoPages*4096,string(find_pe_caller_id())+"::MALLOC"});
	fprintf(stdout,"AllocatePages\n  @address %016lx, size=%lx\n",*Memory,NoPages*4096);

	return EFI_SUCCESS;
}

VOID EFIAPI SetMem(IN VOID *Buffer, IN UINTN Size, IN UINT8 Value)
{
	if (Buffer==NULL) return;
	
	if (can_access(Buffer,Size))
	{
		fprintf(stdout,"SetMem\n  buf=%016lx, size=%lx, val=%d\n",(intptr_t)Buffer,Size,Value);
		memset(Buffer,Value,Size);
	}
	else
		fprintf(stdout,"IGNORE: SetMem\n  buf=%016lx, size=%lx, val=%d\n",(intptr_t)Buffer,Size,Value);
}

VOID EFIAPI CopyMem(IN VOID *Destination, IN VOID *Source, IN UINTN Length)
{
	if (Destination==NULL || Source==NULL) return;
	
	if (can_access(Source,Length) && can_access(Destination,Length))
	{
		fprintf(stdout,"CopyMem\n  src=%016lx, dst=%016lx, size=%lx\n",(intptr_t)Source,(intptr_t)Destination,Length);
		memcpy(Destination,Source,Length);
	}
	else
		fprintf(stdout,"IGNORE: CopyMem\n  src=%016lx, dst=%016lx, size=%lx\n",(intptr_t)Source,(intptr_t)Destination,Length);
}

EFI_STATUS EFIAPI GetNextMonotonicCount(OUT UINT64 *Count)
{
	if (Count==NULL) return EFI_INVALID_PARAMETER;
	
	*Count=__rdtsc();
	
	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI GetNextHighMonotonicCount(OUT UINT32 *HighCount)
{
	if (HighCount==NULL) return EFI_INVALID_PARAMETER;
	
	*HighCount=__rdtsc()>>32;
	
	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI OutputString(IN SIMPLE_TEXT_OUTPUT_INTERFACE *This, IN CHAR16 *String)
{
	char16_print("EFI Output: ",String);
}

EFI_STATUS EFIAPI GetVariable(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, OUT UINT32 *Attributes OPTIONAL, IN OUT UINTN *DataSize, OUT VOID *Data)
{
	if (VariableName==NULL) return EFI_INVALID_PARAMETER;
	if (VendorGuid==NULL) return EFI_INVALID_PARAMETER;
	if (DataSize==NULL) return EFI_INVALID_PARAMETER;
	if (Data==NULL) return EFI_INVALID_PARAMETER;

	UINTN data_size;
	UINT32 attributes;
	void* data=get_variable(VendorGuid,VariableName,&data_size,&attributes);

	fprintf(stdout,"GetVariable Vendor %s, ",guid_string(VendorGuid));
	char16_print("Variable name:",VariableName);

	if (data!=NULL)
	{
		if ((attributes&EFI_VARIABLE_RUNTIME_ACCESS)==0) return EFI_NOT_FOUND;
		if (*DataSize<data_size) return EFI_BUFFER_TOO_SMALL;
		memcpy(Data,data,data_size);
		if (Attributes!=NULL) *Attributes=attributes;
	}
	else
		return EFI_NOT_FOUND;
}

EFI_STATUS EFIAPI SetVariable(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, IN UINT32 Attributes, IN UINTN DataSize, IN VOID *Data)
{
	if (VariableName==NULL) return EFI_INVALID_PARAMETER;
	if (VendorGuid==NULL) return EFI_INVALID_PARAMETER;
	if (Data==NULL) return EFI_INVALID_PARAMETER;

	fprintf(stdout,"IGNORE: SetVariable Vendor %s, ",guid_string(VendorGuid));
	char16_print("Variable name:",VariableName);

	return EFI_NOT_FOUND;
}

EFI_STATUS EFIAPI LocateHandleBuffer(IN EFI_LOCATE_SEARCH_TYPE SearchType, IN EFI_GUID *Protocol OPTIONAL, IN VOID *SearchKey OPTIONAL, IN OUT UINTN *NoHandles, OUT EFI_HANDLE **Buffer)
{
	if (NoHandles==NULL) return EFI_INVALID_PARAMETER;
	if (Buffer==NULL) return EFI_INVALID_PARAMETER;
	if (SearchType!=ByProtocol) return EFI_NOT_FOUND;
	if (Protocol==NULL) return EFI_INVALID_PARAMETER;

	log_protocol("LocateHandleBuffer",Protocol);
	
	static vector<intptr_t> handles;
	auto n=count_handles(Protocol);
	if (n==0) return EFI_NOT_FOUND;
	handles.reserve(n);
	while (handles.size()<n) handles.emplace_back(handles.size());
	*NoHandles=n;
	*Buffer=(void**)handles.data();

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI InSmm(IN VOID *This,OUT BOOLEAN *pInSmm)
{
	if (pInSmm==NULL) return EFI_INVALID_PARAMETER;
	
	*pInSmm=FALSE;//TRUE;
	
	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI GetSmstLocation(IN VOID *This, IN OUT VOID **Smst)
{
	if (Smst==NULL) return EFI_INVALID_PARAMETER;
	
	*Smst=get_smst();
	
	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI QueryMode(IN SIMPLE_TEXT_OUTPUT_INTERFACE *This, IN UINTN ModeNumber, OUT UINTN *Columns, OUT UINTN *Rows)
{
	if (ModeNumber!=0) return EFI_UNSUPPORTED;
	if (Columns) *Columns=80;
	if (Rows) *Rows=25;
	return EFI_SUCCESS;
}

vector<void*> g_acpi_tables;

EFI_STATUS EFIAPI GetAcpiTable(IN VOID *This, IN INTN Index, OUT VOID **Table, OUT UINT32 *Version, OUT UINTN *Handle)
{
	if (Index>=g_acpi_tables.size()) return EFI_NOT_FOUND;
	if (Table==NULL) return EFI_INVALID_PARAMETER;

	*Table=g_acpi_tables[Index];

	return EFI_SUCCESS;
}

EFI_STATUS EFIAPI SetAcpiTable(IN VOID *This, IN VOID *Table OPTIONAL, IN BOOLEAN Checksum, IN UINT32 Version, IN OUT UINTN *Handle)
{
	if (Table==NULL) return EFI_INVALID_PARAMETER;

	g_acpi_tables.push_back(Table);

	return EFI_SUCCESS;
}

