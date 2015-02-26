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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <functional>
#include <string>

using std::string;

static string getline(FILE* fp)
{
	string ret{};
	uint16_t c;
	while (c!='\n' && !feof(fp))
	{
		fread(&c,2,1,fp);
		ret+=(char)c;
	}
	return ret;
}

static void writebuf(string info,uint16_t* buf,size_t size)
{
	// rtrim
	info.erase(std::find_if(info.rbegin(), info.rend(), std::not1(std::ptr_fun<int, int>(std::isspace))).base(), info.end());
	
	FILE *fp=fopen(info.c_str(),"w");
	setvbuf(fp,NULL,_IOFBF,BUFSIZ);
	for (size_t i=0;i<size;i++)
	{
		fwrite(buf++,1,1,fp);
	}
	fclose(fp);
}

int main(void)
{
	FILE *fp=fopen("mdmp","r");
	setvbuf(fp,NULL,_IOFBF,BUFSIZ);
	uint16_t c,*buf=NULL;
	string last_line;
	while (!feof(fp))
	{
		if (1!=fread(&c,2,1,fp)) break;
		if (c==0xfeff)
			if (1!=fread(&c,2,1,fp)) break;
		fseek(fp,-2,SEEK_CUR);
		if (((c>>8)==0xee))
		{
			fputs(last_line.c_str(),stdout);
			long long int start=strtoull(last_line.c_str()+11,NULL,16);
			long long int end=strtoull(last_line.c_str()+28,NULL,16);
			buf=(uint16_t*)realloc(buf,(end-start+1)*2);
			fread(buf,end-start+1,2,fp);
			writebuf(last_line,buf,end-start+1);
		}
		else
		{
			last_line=getline(fp);
		}
	}
	fclose(fp);
	free(buf);
	return 0;
}
