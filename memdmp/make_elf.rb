#!/usr/bin/env ruby
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

require 'base64'

empty_elf=%w(
f0VMRgIBAQAAAAAAAAAAAAEAPgABAAAAAAAAAAAAAAAAAAAAAAAAAFAAAAAAAAAAAAAAAEAAAAAA
AEAAAgABAAAuc2hzdHJ0YWIAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAQAAAAMAAAAAAAAAAAAAAAAAAAAAAAAAQAAA
AAAAAAALAAAAAAAAAAAAAAAAAAAAAQAAAAAAAAAAAAAAAAAAAA==)*""
EmptyElfName='empty.elf'
IO.write(EmptyElfName,Base64.decode64(empty_elf))

counts={}

cmd=['objcopy']
output=ARGV.shift
ARGV.sort.each do |filename|
	secpfx,addr=File.basename(filename).split(/\s+/)
	addr="0x"+addr[0...16]
	counts[secpfx]||=0
	sectn="#{secpfx}.#{counts[secpfx]}"
	counts[secpfx]+=1
	cmd<<'--add-section'
	cmd<<"#{sectn}=#{filename}"
	cmd<<'--change-section-address'
	cmd<<"#{sectn}=#{addr}"
	cmd<<'--set-section-flags'
	cmd<<"#{sectn}=code"
end
cmd<<EmptyElfName
cmd<<output
system(*cmd)
File.unlink(EmptyElfName)
