#!/usr/bin/ruby
# uefireverse - Tools to help with Reverse Engineering UEFI-based firmware
# Copyright (C) 2015  Jethro G. Beekman
#
# This program is free software; you can redistribute it and/or
# modify it under the terms of the GNU General Public License
# as published by the Free Software Foundation; either version 2
# of the License, or (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License
# along with this program; if not, write to the Free Software Foundation,
# Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.

if ARGV.count==0 then
	$stderr.puts "Usage: dec2c <dec-file> ..."
	exit
end

GuidRE=/g(.*)Guid\s*=\s*{\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*{\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+)\s*}\s*}/
CamelCaseRE=/[A-Z]+[^A-Z]+/

known={}

ARGV.each do |f|
	guids=IO.read(f).scan(GuidRE)
	guids.each{|v|v[1..-1]=v[1..-1].map(&:downcase)}
	errors=guids.reject{|v|v[0].scan(CamelCaseRE)*""==v[0]}
	if errors.count>0 then
		$stderr.puts "ERRORS #{f}", errors.map{|v|v[0]}
		exit
	end

	errors=guids.select{|v|	known.include?(v[0]) && known[v[0]]!=v[1..-1] }
	if errors.count>0 then
		$stderr.puts "ERRORS #{f}", errors.map{|v|v[0]}
		exit
	end

	guids.each{|v|known[v[0]]=v[1..-1]}
end

known.each do |k,v|
	slens=[8,4,4,2,2,2,2,2,2,2,2]
	strguid=(v.zip(slens).map{|i,slen|i[2..-1].rjust(slen,"0")}*"")
	[20,16,12,8].each{|n|strguid[n,0]="-"}
	puts "EFI_GUID g#{k}Guid = { #{v[0..2]*", "}, { #{v[3..10]*", "} } }; // #{strguid}"
end
puts <<EOT

typedef struct {
    EFI_GUID* guid;
    const char* name;
} guid_name;

guid_name g_guid_names[]={
EOT
known.map{|k,v|["g#{k}Guid",k.scan(CamelCaseRE).map{|s|s.upcase}*"_"]}.each{|a,b|puts"{&#{a}, \"#{b}\"},"}
puts <<EOT
{NULL, NULL},
};
EOT
