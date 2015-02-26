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

#define DEBUG      // Do not set up SIGALRM

#include <execinfo.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/mman.h>
#include <sys/resource.h>

#include <utility>
#include <vector>
using std::vector;
using std::pair;

#include "main.h"
#include "stubs.h"
#include "efihooks.hpp"
#include "debugmodule.h"
extern "C" {
#include "peloader.h"
}

using std::string;

range_map<intptr_t,string> g_memory_map;
range_map<intptr_t,pair<loadinfo,string>> g_pe_map;
vector<debug_module_init_fn_t> g_init_fns;
vector<debug_module_run_fn_t> g_run_fns;

void register_memory(const memory_block& block)
{
	g_memory_map.erase((intptr_t)block.start,block.size+(intptr_t)block.start);
	g_memory_map.insert((intptr_t)block.start,block.size+(intptr_t)block.start,block.name);
}

memory_block lookup_memory(void* address)
{
	auto map=g_memory_map.find((intptr_t)address);
	if (std::get<2>(map)) return {(void*)std::get<0>(map),(size_t)(-std::get<0>(map)+(intptr_t)address),*std::get<2>(map)};
	return {NULL,0,string()};
}

const char* find_pe_caller_id()
{
	void* ipbuf[80];
	int len=backtrace(ipbuf,80);
	for (int i=0;i<len;i++)
	{
		auto* map=g_pe_map.lookup((intptr_t)ipbuf[i]);
		if (map) return map->second.c_str();
	}
	return NULL;
}

extern "C"
{
void* wrapped_mmap(void *addr, size_t length, int prot, int flags, int fd, off_t offset)
{
	void*p=mmap(addr,length,prot,flags,fd,offset);
	if (p && p!=MAP_FAILED)
	{
		fprintf(stdout,"PE mmap: start=%016lx, end=%016lx\n",(intptr_t)p,length-1+(intptr_t)p);
		register_memory({p,length,"JEMALLOC_HEAP"});
	}
	return p;
}
}

// seperate function so we can set a breakpoint easily
static void start_pe(EFI_IMAGE_ENTRY_POINT entry,EFI_HANDLE handle,EFI_SYSTEM_TABLE* table)
{
	entry(handle,table);
}

void run_pe(const char* id,const char* filename)
{
	int fd=open(filename,O_RDONLY);
	if (fd!=-1)
	{
		auto pe_info=load_pe(fd);
		g_pe_map.erase((intptr_t)pe_info.mmap_base,pe_info.mmap_length+(intptr_t)pe_info.mmap_base);
		g_pe_map.insert((intptr_t)pe_info.mmap_base,pe_info.mmap_length+(intptr_t)pe_info.mmap_base,{pe_info,string(id)});
		register_memory({pe_info.mmap_base,(size_t)pe_info.image_base-(size_t)pe_info.mmap_base,string(id)+"::IMAGE_MMAP"});
		register_memory({pe_info.image_base,pe_info.mmap_length-((intptr_t)pe_info.image_base-(intptr_t)pe_info.mmap_base),string(id)+"::IMAGE_BASE"});
		auto entry=(EFI_IMAGE_ENTRY_POINT)pe_info.entry_point;
		close(fd);
		
		fprintf(stdout,"Loaded %s at %p\n",id,pe_info.image_base);

		if (entry)
			start_pe(entry,(EFI_HANDLE)id,&g_efi_system_table);
		fprintf(stdout,"Exited gracefully\n");
	}
}

static void stack_init()
{
	static intptr_t stackhi=0;
	static intptr_t stacklo=0;
	if (!stackhi)
	{
		FILE* fp=fopen("/proc/self/stat","r");
		if (fp)
		{
			if (1==fscanf(fp,"%*d %*s %*c %*d %*d %*d %*d %*d %*u %*u %*u %*u %*u %*u %*u %*d %*d %*d %*d %*d %*d %*u %*u %*d %*u %*u %*u %lu",&stackhi))
			{
				stackhi|=0xfff;
				stackhi+=1;
			}
			else
			{ // this might be guaranteed unassigned?
				stackhi=0;
			}
			fclose(fp);
		}
		
	}
	if (!stacklo && stackhi)
	{
		struct rlimit rl;
		if (0==getrlimit(RLIMIT_STACK,&rl))
		{
			stacklo=stackhi-rl.rlim_cur;
		}
	}
	if (stackhi && stacklo)
	{
		register_memory({(void*)stacklo,(size_t)(stackhi-stacklo),"STACK"});
	}
}

void register_debug_module(debug_module_init_fn_t init, debug_module_run_fn_t run)
{
	if (init) g_init_fns.push_back(init);
	if (run) g_run_fns.push_back(run);
}

int main(int argc, char** argv)
{
	if (argc<2 || argc>3 || (argc==3 && strcmp(argv[1],"--unsafe")) || (argc==2 && !strcmp(argv[1],"--unsafe")))
	{
		fprintf(stderr,"Usage: %s filename\n",argv[0]);
		return 1;
	}
	if (argc==2 || strcmp(argv[1],"--unsafe"))
	{
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		fputs("!!!                                                                          !!!\n",stderr);
		fputs("!!! THIS SOFTWARE IS PROVIDED 'AS IS', WITHOUT WARRANTY OF ANY KIND, EXPRESS !!!\n",stderr);
		fputs("!!! OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF               !!!\n",stderr);
		fputs("!!! MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.   !!!\n",stderr);
		fputs("!!! IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY     !!!\n",stderr);
		fputs("!!! CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,     !!!\n",stderr);
		fputs("!!! TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE        !!!\n",stderr);
		fputs("!!! SOFTWARE OR THE USE OR OTHER DEALINGS IN THIS SOFTWARE.                  !!!\n",stderr);
		fputs("!!!                                                                          !!!\n",stderr);
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		fputs("\n",stderr);
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		fputs("!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!\n",stderr);
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		fputs("!!!                                                                          !!!\n",stderr);
		fputs("!!!  This program LOADS AND RUNS Portable Executable (PE) image files. It    !!!\n",stderr);
		fputs("!!!  does this WITHOUT ANY PROTECTION MECHANISMS. Certain memory sections    !!!\n",stderr);
		fputs("!!!  will be mapped WRITABLE AND EXECUTABLE simultaneously. DO NOT RUN THIS  !!!\n",stderr);
		fputs("!!!  on untrusted software. THINK CAREFULLY before running this on trusted   !!!\n",stderr);
		fputs("!!!  software. To continue, put `--unsafe' as the first argument.            !!!\n",stderr);
		fputs("!!!                                                                          !!!\n",stderr);
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		fputs("!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!! WARNING !!!\n",stderr);
		fputs("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n",stderr);
		return 1;
	}

	stack_init();
	efi_hooks_init();
	for (auto fn: g_init_fns) fn();

	printf("Intialization done. Loading images.\n");
#ifndef DEBUG
	alarm(10);
#endif
	// If you want to load multiple PE images at the same time, this is where
	// you want to do that with more calls to run_pe().
	run_pe("MAIN_PE_IMAGE",argv[2]);

	printf("Done loading images. Executing user functions.\n");
	for (auto fn: g_run_fns) fn();
	
	return 0;
}

