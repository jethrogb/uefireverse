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

class Section
	attr_reader :children, :index, :name, :parent, :metadata

	def descend(path)
		raise TypeError, "expected #{path.inspect} to be an array" unless path.is_a? Array
		return self if path.length==0
		if path[0].is_a? Numeric then
			@children[path[0]].descend(path[1..-1])
		else
			opts=@children.select {|c| c.name==path[0] }
			raise IndexError, "ambiguous path #{path.inspect}" unless opts.length==1
			opts[0].descend(path[1..-1])
		end
	end

	# Recursive
	def each(&block)
		yield self
		@children.each{|c|c.each(&block)}
	end
	include Enumerable

	def inspect
		"<Section #{to_s}>"
	end

	def to_s
		with_ancestors.map{|v|v.name}*"::"
	end

	def with_ancestors
		return [self] if parent.nil?
		parent.with_ancestors+[self]
	end

	def body_path
		File.join(*with_ancestors[1..-1].map{|v|"#{v.index} #{v.name}"},"body.bin")
	end

private
	def add_child(num,name,metadata)
		p=self
		@children[num]=Section.instance_exec{new(p,num,name,metadata)}
	end

	def initialize(parent,index,name,metadata)
		@children=[]
		@index=index
		@name=name.dup.freeze
		@parent=parent
		@metadata=metadata.dup.freeze
	end

	class << self
	private :new
	private
		def parse_section(s)
			ret={}
			ri=-1
			ci=s.index(":")
			until ci.nil?
				name=s[(ri+1)...ci]
				new_ci=s.index(":",ci+1)
				ri=new_ci ? s.rindex("\n",new_ci) : -1
				value=s[(ci+2)..ri].chomp
				if ret.include? name then
					ret[name]=[ret[name]] unless ret[name].is_a?(Array)
					ret[name] << value
				else
					ret[name]=value
				end
				ci=new_ci
			end
			ret
		end

		def parse_dirname(dirname)
			raise NameError, "parse_dirname #{dirname}" unless dirname=~/^(\d+) (.+)$/
			[$~[1].to_i,$~[2]]
		end

		def read_section(s,basepath)
			path=s.split(File::SEPARATOR)
			raise NameError, "read_section #{s}" unless path[0]=="." and path[-1]=="info.txt"
			[path[1...-1].map{|v|parse_dirname(v)},parse_section(IO.read(File.join(basepath,s)))]
		end

	public
		def readdir(path)
			sections=Hash[IO.popen(['find','-name','info.txt','-print0',:chdir=>path],'r'){|io|io.read}.split("\0").map{|s|read_section(s,path)}]
			root=nil
			sections.keys.sort.each do |k|
				data=sections[k]
				if k==[] then
					root=new(nil,0,"<ROOT>",data)
				else
					root.descend(k[0...-1].map{|i,s|i}).instance_exec{add_child(k[-1][0],k[-1][1],data)}
				end
			end
			root.each{|c| c.children.freeze}
			root
		end
	end
end
