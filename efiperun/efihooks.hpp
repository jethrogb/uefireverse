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

#ifndef HOOKS_H
#define HOOKS_H

#include <sys/mman.h>
#include <unistd.h>
#include <stdlib.h>
#include <efi.h>
#include <vector>

#define HOOKFN_T(name,type) EFI_STATUS (*name)(type*,void*,void*,void*,void*)

template<typename T> class __attribute__((__packed__)) GenericHook
{
	HOOKFN_T(m_pfn,T);
	T data;
	/* code */
	// This calls m_pfn(&data,...) via fix_hook()
	unsigned char op1[3];      // lea IND32(%rip),%r10     4c 8d 15
	int op1Index;
	unsigned char op2[2];      // movabs IMM64,%rax        48 b8
	unsigned long long op2Imm;
	unsigned char op3[2];      // jmpq *%rax               ff e0
	/* end code */

	static EFI_STATUS EFIAPI fix_hook(void*,void*,void*,void*);
public:
	GenericHook(T d,HOOKFN_T(pfn,T));
	void* get_func();
};

struct GuidIndex
{
	EFI_GUID guid;
	int index;
};

template<int NUM> class DummyInterface
{
	void* pointers[NUM];
	std::vector<GenericHook<GuidIndex>> hooks;
public:
	DummyInterface(EFI_GUID* pguid,HOOKFN_T(pfn,GuidIndex));
};

template<typename T> GenericHook<T>::GenericHook(T d,HOOKFN_T(pfn,T))
	: op1{0x4c,0x8d,0x15}, op2{0x48,0xb8}, op3{0xff,0xe0}, data(d), m_pfn(pfn)
{
	op1Index=((intptr_t)this)-((intptr_t)&op2);
	op2Imm=(intptr_t)&fix_hook;
}
	
template<typename T> void* GenericHook<T>::get_func()
{
	/* Unprotect page with code */
	int pagesize=sysconf(_SC_PAGE_SIZE);
	int pagemask=pagesize-1;
	intptr_t page1=((intptr_t)&op1)&~pagemask;
	intptr_t page2=(((intptr_t)&op3)+sizeof(op3)-1)&~pagemask;
	mprotect((void*)page1,pagesize,PROT_READ|PROT_WRITE|PROT_EXEC);
	if (page2!=page1)
	mprotect((void*)page2,pagesize,PROT_READ|PROT_WRITE|PROT_EXEC);
	
	/* code pointer */
	return &op1;
}

template<typename T> EFI_STATUS EFIAPI GenericHook<T>::fix_hook(void* a0,void* a1,void* a2,void* a3)
{
	GenericHook<T>* r10;
	asm __volatile ("mov %%r10, %0":"=g"(r10)::);
	return r10->m_pfn(&r10->data,a0,a1,a2,a3);
}

template<int NUM> DummyInterface<NUM>::DummyInterface(EFI_GUID* pguid,HOOKFN_T(pfn,GuidIndex))
{
	hooks.reserve(NUM);
	for (int i=0;i<NUM;i++)
	{
		hooks.emplace_back(GuidIndex{*pguid,i},pfn);
		pointers[i]=hooks.back().get_func();
	}
	register_memory({this,sizeof(pointers),std::string(guid_string(pguid))+"::PROTOCOL"});
}

#define MAKE_GUID(g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10)\
EFI_GUID guid_##g0##_##g1##_##g2##_##g3##g4##_##g5##g6##g7##g8##g9##g10={0x##g0,0x##g1,0x##g2,{0x##g3,0x##g4,0x##g5,0x##g6,0x##g7,0x##g8,0x##g9,0x##g10}}

#define AS_PROTOCOL_GUID(g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10) \
protocol_##g0##_##g1##_##g2##_##g3##g4##_##g5##g6##g7##g8##g9##g10##_t; \
MAKE_GUID(g0,g1,g2,g3,g4,g5,g6,g7,g8,g9,g10); \
protocol_##g0##_##g1##_##g2##_##g3##g4##_##g5##g6##g7##g8##g9##g10##_t protocol_##g0##_##g1##_##g2##_##g3##g4##_##g5##g6##g7##g8##g9##g10={}

extern EFI_SYSTEM_TABLE g_efi_system_table;

void efi_hooks_init();

#define ABORTHOOK(s,m) s.m=(decltype(s.m))new_abort_hook(#s "::" #m);
#define DUMMYHOOK(s,m) s.m=(decltype(s.m))new_dummy_hook(#s "::" #m);
#define PRINTHOOK(s,m) s.m=(decltype(s.m))new_print_hook(#s "::" #m);

void* new_abort_hook(const char* name);
void* new_dummy_hook(const char* name);
void* new_print_hook(const char* name);

#endif //HOOKS_H
