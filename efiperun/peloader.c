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

#define mmap wrapped_mmap

#include <sys/mman.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define EFI_IMAGE_MACHINE_IA32
#define EFI_IMAGE_MACHINE_IA64
#include <efi.h>
#undef EFI_IMAGE_MACHINE_IA32
#undef EFI_IMAGE_MACHINE_IA64
// not using <pe.h> becauses for some reason it does not have PE32+ support
#include "PeImage.h"

#include "peloader.h"

////////////////////    from wine    ////////////////////
////////////////// dlls/ntdll/loader.c //////////////////

typedef uint32_t UINT, DWORD_PTR;
typedef uint16_t USHORT, WORD;
typedef intptr_t INT_PTR;

#define FIXME(args...) fprintf(stderr,args)
#define LOWORD(l)              ((WORD)((DWORD_PTR)(l) & 0xFFFF))
#define HIWORD(l)              ((WORD)((DWORD_PTR)(l) >> 16))

/***********************************************************************
 *           LdrProcessRelocationBlock  (NTDLL.@)
 *
 * Apply relocations to a given page of a mapped PE image.
 */
static EFI_IMAGE_BASE_RELOCATION * LdrProcessRelocationBlock( void *page, UINT count,
														  USHORT *relocs, INT_PTR delta )
{
	while (count--)
	{
		USHORT offset = *relocs & 0xfff;
		int type = *relocs >> 12;
		switch(type)
		{
		case EFI_IMAGE_REL_BASED_ABSOLUTE:
			break;
		case EFI_IMAGE_REL_BASED_HIGH:
			*(short *)((char *)page + offset) += HIWORD(delta);
			break;
		case EFI_IMAGE_REL_BASED_LOW:
			*(short *)((char *)page + offset) += LOWORD(delta);
			break;
		case EFI_IMAGE_REL_BASED_HIGHLOW:
			*(int *)((char *)page + offset) += delta;
			break;
		case EFI_IMAGE_REL_BASED_DIR64:
			*(INT_PTR *)((char *)page + offset) += delta;
			break;
		default:
			FIXME("Unknown/unsupported fixup type %x.\n", type);
			return NULL;
		}
		relocs++;
	}
	return (EFI_IMAGE_BASE_RELOCATION *)relocs;  /* return address of next block */
}

/////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////

#define ERRNO_ERROR(s) { perror(#s); goto error; }
#define ERROR(msg) { fputs(msg "\n",stderr); goto error; }

typedef EFI_IMAGE_NT_HEADERS32 EFI_IMAGE_NT_HEADERS;
typedef EFI_IMAGE_OPTIONAL_HEADER32 EFI_IMAGE_OPTIONAL_HEADER;

loadinfo load_pe(int fd)
{
	struct stat st;
	char *pebuf=NULL,*memptr=NULL,*pbase;
	EFI_IMAGE_DOS_HEADER* dos;
	EFI_IMAGE_NT_HEADERS* nt;
	EFI_IMAGE_SECTION_HEADER* shdrs;
	EFI_IMAGE_OPTIONAL_HEADER* oh;
	EFI_IMAGE_OPTIONAL_HEADER32* oh32=NULL;
	EFI_IMAGE_OPTIONAL_HEADER64* oh64=NULL;
	int page_bits;
	intptr_t base,size;
	loadinfo ret={};

	if (fstat(fd,&st)!=0) ERRNO_ERROR(fstat);
	if (!(pebuf=(char*)malloc(st.st_size))) ERRNO_ERROR(malloc);
	if (read(fd,pebuf,st.st_size)!=st.st_size) ERRNO_ERROR(read);
	
	dos=(EFI_IMAGE_DOS_HEADER*)pebuf;
	if (dos->e_magic!=EFI_IMAGE_DOS_SIGNATURE) ERROR("Invalid MZ signature");
	nt=(EFI_IMAGE_NT_HEADERS*)(pebuf+dos->e_lfanew);
	if (nt->Signature!=EFI_IMAGE_NT_SIGNATURE) ERROR("Invalid PE signature");

	if (!(nt->FileHeader.Characteristics&EFI_IMAGE_FILE_EXECUTABLE_IMAGE)) ERROR("PE not executable");

	if (nt->FileHeader.Machine!=EFI_IMAGE_FILE_MACHINE_I386 && nt->FileHeader.Machine!=EFI_IMAGE_MACHINE_X64) ERROR("PE not i386/x86_64");
	
	oh=&nt->OptionalHeader;
	
	if (nt->FileHeader.SizeOfOptionalHeader<2 || !(
		(nt->FileHeader.SizeOfOptionalHeader==sizeof(*oh32) && oh->Magic==EFI_IMAGE_NT_OPTIONAL_HDR32_MAGIC) ||
		(nt->FileHeader.SizeOfOptionalHeader==sizeof(*oh64) && oh->Magic==EFI_IMAGE_NT_OPTIONAL_HDR64_MAGIC) ) )
		ERROR("PE Optional header invalid");

	if (nt->FileHeader.SizeOfOptionalHeader==sizeof(*oh64))
		oh64=(EFI_IMAGE_OPTIONAL_HEADER64*)&nt->OptionalHeader;
	else
		oh32=(EFI_IMAGE_OPTIONAL_HEADER32*)&nt->OptionalHeader;
#define oh(f) (oh64?oh64->f:oh32->f)

	page_bits=sysconf(_SC_PAGE_SIZE)-1;

	base=oh(ImageBase)&~page_bits;
	size=((oh(ImageBase)+oh(SizeOfImage))|page_bits)+1;
	if (size<base) ERROR("Invalid ImageBase/SizeOfImage");
	size-=base;
	
	memptr=(char*)mmap((void*)base,size,PROT_EXEC|PROT_READ|PROT_WRITE,MAP_PRIVATE|MAP_ANONYMOUS|(base?MAP_FIXED:0),-1,0);
	if (memptr==MAP_FAILED) ERRNO_ERROR(mmap);
	pbase=base?(char*)oh(ImageBase):memptr;

	shdrs=(EFI_IMAGE_SECTION_HEADER*)(((char*)oh)+nt->FileHeader.SizeOfOptionalHeader);
	for(int i=0;i<nt->FileHeader.NumberOfSections;i++)
	{
		if (shdrs[i].VirtualAddress!=shdrs[i].PointerToRawData) ERROR("Section VirtualAddress/file offset mismatch");
		memcpy(pbase+shdrs[i].VirtualAddress,pebuf+shdrs[i].PointerToRawData,shdrs[i].SizeOfRawData);
	}
	
	if (!base)
	{
		EFI_IMAGE_DATA_DIRECTORY *relocs=&oh(DataDirectory)[EFI_IMAGE_DIRECTORY_ENTRY_BASERELOC];
		EFI_IMAGE_BASE_RELOCATION *rel=(EFI_IMAGE_BASE_RELOCATION*)(pbase+relocs->VirtualAddress);
		EFI_IMAGE_BASE_RELOCATION *end=(EFI_IMAGE_BASE_RELOCATION*)(pbase+relocs->VirtualAddress+relocs->Size);

		while (rel<end-1 && rel->SizeOfBlock)
		{
			if (rel->VirtualAddress >= (memptr+size)-pbase) ERROR("Invalid Relocation");
			rel = LdrProcessRelocationBlock( pbase+rel->VirtualAddress,
											 (rel->SizeOfBlock-sizeof(*rel))/sizeof(USHORT),
											 (USHORT*)(rel+1), (intptr_t)pbase );
			if (!rel) goto error;
		}
	}
	
	ret.mmap_base=memptr;
	ret.mmap_length=size;
	ret.image_base=pbase;
	ret.entry_point=pbase+oh(AddressOfEntryPoint);
	free(pebuf);
	return ret;
error:
	if (memptr!=0 && memptr!=MAP_FAILED) munmap(memptr,size);
	free(pebuf);
	return ret;
}
