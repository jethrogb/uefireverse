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

#ifndef MAIN_H
#define MAIN_H

#include <efi.h>
#include <functional>

namespace std
{
	template<> struct hash<EFI_GUID>
	{
		constexpr size_t operator()(EFI_GUID const& s) const
		{
			return ((UINT64*)&s)[0]^((UINT64*)&s)[1];
		}
	};
}

constexpr bool operator==(EFI_GUID const& s1, EFI_GUID const& s2)
{
	return ((UINT64*)&s1)[0]==((UINT64*)&s2)[0] && ((UINT64*)&s1)[1]==((UINT64*)&s2)[1];
}

const char* find_pe_caller_id();
const char* guid_string(EFI_GUID* guid);
void log_protocol(const char* type,EFI_GUID* guid);
void* find_protocol(EFI_GUID* guid,EFI_HANDLE handle);
void install_protocol(EFI_GUID* guid,EFI_HANDLE handle,void* interface);
intptr_t count_handles(EFI_GUID* guid);
void* get_variable(EFI_GUID* guid,CHAR16* name,UINTN* data_size,UINT32* attributes);
void set_variable(EFI_GUID* guid,const CHAR16* name,void* data,UINTN data_size,UINT32 attributes);
void char16_print(const char* prefix, CHAR16* str);
void* get_smst();

#include <string>
#include "vast/util/range_map.hpp"
using vast::util::range_map;

extern range_map<intptr_t,std::string> g_memory_map;

struct memory_block
{
	void* start;
	union {
		size_t size;
		size_t offset;
	};
	std::string name;
};

void register_memory(const memory_block& block); // use size member
memory_block lookup_memory(void* address); // use offset member

#endif //MAIN_H
