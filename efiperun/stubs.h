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

#ifndef STUBS_H
#define STUBS_H

#include <efi.h>

EFI_STATUS EFIAPI HandleProtocol(IN EFI_HANDLE Handle,IN EFI_GUID *Protocol,OUT VOID **Interface);
EFI_STATUS EFIAPI LocateProtocol(IN EFI_GUID *Protocol,IN VOID *Registration OPTIONAL,OUT VOID **Interface);
EFI_STATUS EFIAPI InstallProtocolInterface(IN OUT EFI_HANDLE *Handle, IN EFI_GUID *Protocol, IN EFI_INTERFACE_TYPE InterfaceType, IN VOID *Interface);
EFI_STATUS EFIAPI InstallMultipleProtocolInterfaces(IN OUT EFI_HANDLE *Handle, ...);
EFI_STATUS EFIAPI AllocatePool(IN EFI_MEMORY_TYPE PoolType, IN UINTN Size, OUT VOID **Buffer);
EFI_STATUS EFIAPI AllocatePages(IN EFI_ALLOCATE_TYPE Type, IN EFI_MEMORY_TYPE MemoryType, IN UINTN NoPages, OUT EFI_PHYSICAL_ADDRESS *Memory);
VOID       EFIAPI SetMem(IN VOID *Buffer, IN UINTN Size, IN UINT8 Value);
VOID       EFIAPI CopyMem(IN VOID *Destination, IN VOID *Source, IN UINTN Length);
EFI_STATUS EFIAPI GetNextMonotonicCount(OUT UINT64 *Count);
EFI_STATUS EFIAPI GetNextHighMonotonicCount(OUT UINT32 *HighCount);
EFI_STATUS EFIAPI OutputString(IN SIMPLE_TEXT_OUTPUT_INTERFACE *This, IN CHAR16 *String);
EFI_STATUS EFIAPI GetVariable(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, OUT UINT32 *Attributes OPTIONAL, IN OUT UINTN *DataSize, OUT VOID *Data);
EFI_STATUS EFIAPI SetVariable(IN CHAR16 *VariableName, IN EFI_GUID *VendorGuid, IN UINT32 Attributes, IN UINTN DataSize, IN VOID *Data);
EFI_STATUS EFIAPI LocateHandleBuffer(IN EFI_LOCATE_SEARCH_TYPE SearchType, IN EFI_GUID *Protocol OPTIONAL, IN VOID *SearchKey OPTIONAL, IN OUT UINTN *NoHandles, OUT EFI_HANDLE **Buffer);
EFI_STATUS EFIAPI InSmm(IN VOID *This,OUT BOOLEAN *pInSmm);
EFI_STATUS EFIAPI GetSmstLocation(IN VOID *This, IN OUT VOID **Smst);
EFI_STATUS EFIAPI QueryMode(IN SIMPLE_TEXT_OUTPUT_INTERFACE *This, IN UINTN ModeNumber, OUT UINTN *Columns, OUT UINTN *Rows);
EFI_STATUS EFIAPI GetAcpiTable(IN VOID *This, IN INTN Index, OUT VOID **Table, OUT UINT32 *Version, OUT UINTN *Handle);
EFI_STATUS EFIAPI SetAcpiTable(IN VOID *This, IN VOID *Table OPTIONAL, IN BOOLEAN Checksum, IN UINT32 Version, IN OUT UINTN *Handle); 
    
#endif //STUBS_H
