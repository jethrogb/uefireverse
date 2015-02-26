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

#ifndef PELOADER_H
#define PELOADER_H

typedef struct {
	void* mmap_base;
	size_t mmap_length;
	void* image_base;
	void* entry_point;
} loadinfo;

#ifdef __cplusplus
constexpr bool operator==(loadinfo const& s1, loadinfo const& s2)
{
	return s1.mmap_base  ==s2.mmap_base   &&
	       s1.mmap_length==s2.mmap_length &&
	       s1.image_base ==s2.image_base  &&
	       s1.entry_point==s2.entry_point ;
}
#endif

loadinfo load_pe(int fd);

#endif //PELOADER_H
