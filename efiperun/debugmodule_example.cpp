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

#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>

#include "vast/filesystem.hpp"

using vast::directory;

#include "main.h"
#include "debugmodule.h"

#include "efi_guid.c"

typedef struct _EFI_ACPI_SUPPORT_PROTOCOL {
	void* GetAcpiTable;
	EFI_STATUS(EFIAPI *SetAcpiTable)(VOID*, VOID*, BOOLEAN, UINT32, UINTN*);
	void* PublishTables;
} EFI_ACPI_SUPPORT_PROTOCOL;

static void load_acpi_tables()
{
	auto* acpi_support=(EFI_ACPI_SUPPORT_PROTOCOL*)find_protocol(&gEfiAcpiSupportProtocolGuid,NULL);
	
	if (acpi_support)
	{
		for (auto& file : directory("acpi"))
		{
			struct stat st={};
			FILE* fp=fopen(file.c_str(),"r");
			if (fp)
			{
				if (0==fstat(fileno(fp),&st))
				{
					void* table=malloc(st.st_size);
					if (1==fread(table,st.st_size,1,fp))
					{
						acpi_support->SetAcpiTable(acpi_support,table,FALSE,0,NULL);
					}
					else
					{
						free(table);
					}
				}
				fclose(fp);
			}
		}
	}
}

static void init()
{
	load_acpi_tables();
}

static void run()
{
}

__attribute__((constructor))
static void register_module()
{
	register_debug_module(init,run);
}
