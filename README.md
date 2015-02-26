UEFI reverse engineering tools
==============================

This is a collection of tools to help reverse UEFI-based firwmare.

efiperun
--------
Load and run EFI PE image files on your favorite operation system (Linux). See 
```efiperun/README.md``` for more information.

guiddb
------
Scan .dec files (from e.g. [TianoCore EDK2]) for GUIDs and output them in 
C-source file format. A database of known guids is in ```guiddb/efi_guid.c```.

memdmp
------
Tools to dump UEFI memory. There's a patch against [EdkShell] that makes the 
```memmap``` command dump memory, pipe that to a file called ```mdmp```. Then, 
run ```dmp2seg``` to convert that output file into many files with the actual 
memory contents. Then, run ```make_elf.rb``` to make a single ELF file with all 
the memory contents. The ELF file is not executable or anything, it's just a 
convenient format to store memory segments.

tree
----
A class file that will provides a Ruby tree abstraction for a firmware tree on 
your filesystem previously extracted by UEFIExtract (from [UEFITool]). Use 
UEFITool commit bf2c9f59 or newer.

Also included is an example script that uses said abstraction.

Other tools
===========

I highly recommend [UEFITool] by Nikolaj Schlej.

[TianoCore EDK2]: https://github.com/tianocore/edk2
[EdkShell]: https://svn.code.sf.net/p/efi-shell/code/trunk/Shell
[UEFITool]: https://github.com/LongSoft/UEFITool
