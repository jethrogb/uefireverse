UEFI reverse engineering tools
==============================

This is a collection of tools to help reverse UEFI-based firwmare.

dec2c.rb
--------

Scan .dec files (from e.g. [TianoCore EDK2]) for GUIDs and output them in 
C-source file format.

tree.rb
-------

A class file that will provides a Ruby tree abstraction for a firmware tree on 
your filesystem previously extracted by UEFIExtract (from [UEFITool]). Use 
UEFITool commit bf2c9f59 or newer.

Other tools
===========

I highly recommend [UEFITool] by Nikolaj Schlej.

[TianoCore EDK2]: https://github.com/tianocore/edk2
[UEFITool]: https://github.com/LongSoft/UEFITool
