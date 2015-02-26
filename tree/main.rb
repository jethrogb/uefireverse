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

require './tree'
path='UEFIEXTRACT_DATA_PATH'
root=Section.readdir(path)

ImageTypeRE=/^(TE|PE32\(\+\)) image$/

def guid_string_to_binary(guid_string)
	raise unless guid_string=~/^(\h{8})-(\h{4})-(\h{4})-(\h{4})-(\h{12})$/
	r =$~[1].chars.each_slice(2).to_a.reverse*""
	r+=$~[2].chars.each_slice(2).to_a.reverse*""
	r+=$~[3].chars.each_slice(2).to_a.reverse*""
	r+=$~[4]
	r+=$~[5]
	[r].pack("H*")
end

def all_indices(string,search,casei)
	ret=[]
	i=-1
	if casei then
		search=Regexp.new(search,Regexp::IGNORECASE)
		until (i=string.match(search,i+1)).nil?
			i=i.offset(0)[0]
			ret << i
		end
	else
		until (i=string.index(search,i+1)).nil?
			ret << i
		end
	end	
	ret
end

def find_guids(guids,string)
	ret={}
	guids.each do |guid|
		indices=all_indices(string,guid,true)+all_indices(string,guid_string_to_binary(guid),false)+all_indices(string,guid.encode('utf-16le').force_encoding('binary'),true)
		ret[guid]=indices if indices.count>0
	end
	ret
end

def image_guid(image_section)
	if image_section.parent.metadata.include?("File GUID") then
		image_section.parent.metadata["File GUID"]
	elsif image_section.parent.metadata.include?("Section GUID") && image_section.parent.metadata["Section GUID"]=="FC1BCDB0-7D31-49AA-936A-A4600D9DD083" then
		image_section.parent.parent.metadata["File GUID"]
	elsif image_section.parent.metadata["Subtype"]=="Compressed" then
		image_guid(image_section.parent)
	else
		raise
	end
end

def image_identify(image_section)
	if image_section.parent.metadata.include?("File GUID") then
		image_section.parent.metadata["Text"]
	elsif image_section.parent.metadata.include?("Section GUID") && image_section.parent.metadata["Section GUID"]=="FC1BCDB0-7D31-49AA-936A-A4600D9DD083" then
		image_section.parent.parent.metadata["Text"]
	elsif image_section.parent.metadata["Subtype"]=="Compressed" then
		image_identify(image_section.parent)
	else
		raise
	end
end

def image_get_dependency_guids(image_section)
	image_section.select{|v|v.metadata["Subtype"]=~/(PEI|DXE) dependency/}.map{|v|v.metadata["Parsed expression"].scan(/PUSH (\h{8}-\h{4}-\h{4}-\h{4}-\h{12})/)}.flatten.map(&:downcase).uniq
end

def guid_identify(guid)
	ret=[]
	if $known_guids.include? guid then
		ret<<$known_guids[guid][:of_image].metadata["Text"] if $known_guids[guid].include? :of_image
		ret<<$known_guids[guid][:edk_name] if $known_guids[guid].include? :edk_name
	end
	ret << guid if ret.count==0
	ret*"/"
end

$known_guids={}

images=[] # root.select{...}
images.each{|v|$known_guids[v.metadata["File GUID"].downcase]={:of_image=>v}}

dependency_guids=images.map do |i|
	deps=image_get_dependency_guids(i)
	guid=i.metadata["File GUID"].downcase
	$known_guids[guid][:has_dependencies]||=[]
	$known_guids[guid][:has_dependencies]+=deps
	deps.each do |d|
		$known_guids[d]||={}
		$known_guids[d][:dependency_of]||=[]
		$known_guids[d][:dependency_of]<<guid
	end
	deps
end.flatten.uniq

edk_guids=IO.read('efi_guid.c').scan(/g(.*)Guid\s*=\s*{\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*{\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+),\s*(0x\h+)\s*}\s*}/).map do |m|
	name=m[0]
	slens=[8,4,4,2,2,2,2,2,2,2,2]
	guid=(m[1..-1].zip(slens).map{|i,slen|i[2..-1].rjust(slen,"0")}*"").downcase
	[20,16,12,8].each{|n|guid[n,0]="-"}
	$known_guids[guid]||={}
	$known_guids[guid][:edk_name]=name
	guid
end

#///////// Pretty-print known GUIDs
#$known_guids.each do |guid,props|
#	next unless SystemCryptSvcRt_guids.include? guid #props.include?(:dependency_of) || props.include?(:has_dependencies)
#	id=guid_identify(guid)
#	if guid==id then
#		puts guid
#	else
#		puts "#{id} (#{guid})"
#	end
#	[:dependency_of,:has_dependencies].each do |k|
#		next unless props.include? k
#		props[k].each do |guid|
#			puts "    #{k} #{guid_identify(guid)}"
#		end
#	end
#end

#///////// Find GUIDs in image files
#images.map{|v|v.select{|v|v.metadata["Subtype"]=~ImageTypeRE}}.flatten.each do |image_section|
#	guids=find_guids($known_guids.keys,IO.read(File.join(path,image_section.body_path)).force_encoding('binary'))
#	if guids.count>0 then
#		puts image_identify(image_section) || image_guid(image_section)
#		guids.each do |k,v|
#			puts "\t#{k}\t#{v.map{|i|i.to_s(16)}*" "}"
#		end
#	end
#end

#///////// Run x86_64 image files
#ios_running={}
#ios_done={}
#images.map{|v|v.select{|v|v.metadata["Subtype"]=~ImageTypeRE}}.flatten.each do |image_section|
#	if image_section.metadata["Optional header signature"]=="020Bh" then
#		io=IO.popen(['../efiperun/efiperun','--unsafe',File.join(path,image_section.body_path)])
#		ios_running[io]={:image_section=>image_section,:output=>""}
#	end
#end
#$stderr.puts "Launched #{ios_running.count} processes..."
#while ios_running.count>0
#	ready=select(ios_running.keys,[],ios_running.keys)
#	ready.reduce(:|).each do |io|
#		if io.eof? then
#			ios_running[io][:output] << io.read.to_s
#			io.close
#			ios_running[io][:status]=$?
#			ios_done[io]=ios_running.delete(io)
#			$stderr.print "#{ios_done.count}..." if (ios_done.count%50)==0
#		else
#			ios_running[io][:output] << io.readpartial(2048)
#		end
#	end
#end
#$stderr.print "Done.\n"
#ios_done.each do |_,proc|
#	puts File.join(path,proc[:image_section].body_path)
#	puts image_identify(proc[:image_section]) || image_guid(proc[:image_section])
#	$stderr.puts image_guid(proc[:image_section]) if proc[:output].include? '4c8a2451-c207-405b-9694-99ea13251341'
#	puts proc[:output]
#	puts "Exit#{proc[:status].to_s.sub(/pid \d+( exit)?/,"")}"
#	puts "---------"
#end

#///////// Find image files
#root.select{|v|v.metadata["Subtype"]=~ImageTypeRE}.map do |v|
#	hexre=/^(\h+)h/
#	raise unless v.metadata["Body size"]=~hexre
#	size=$~[1].to_i(16)
#	raise unless v.metadata["ImageBase"]=~hexre
#	base=$~[1].to_i(16)
#	[base,base+size-1,size,v.with_ancestors[1..-1].map{|v|v.index}]
#end.sort.each do |b,e,s,n|
#	node=root.descend(n)
#	puts "%08x\t%08x\t%08x\t%s\t%s" % [b,e,s,image_guid(node),image_identify(node)]
#end
