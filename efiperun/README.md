efiperun
========

Load and run EFI PE image files on your favorite operation system (Linux). PE 
images are just x86 code that will run fine as long as the environment is 
correct. efiperun is to EFI as Wine is to Windows, but much less advanced.

This tool is not meant for long-term use and only for debugging. There's 
instrumentation everywhere, which is great for debugging but makes things slow. 
Memory generally doesn't get freed. Most EFI functionality is not implemented. 
Functions that are implemented only provide the bare minimum. This tool aims to 
aid in debugging/reverse engineering by providing a framework that you can 
extend as necessary.

**DISCLAIMER:** This program **loads and runs** Portable Executable (PE) image 
files. It does this **without any protection mechanisms**. Certain memory 
sections will be mapped **writable and executable** simultaneously. **Do not 
run this** on untrusted software. **Think carefully** before running this on 
trusted software.

Building
========

You will need the [GNU EFI](http://sourceforge.net/projects/gnu-efi/) package.

You will need to build [jemalloc](http://www.canonware.com/jemalloc/) 3.6.0 in 
a subdirectory called jemalloc-3.6.0. **IMPORTANT:** Do not try to use the 
jemalloc library that might come pre-installed on your system! Configure as 
follows:

```
./configure --with-jemalloc-prefix=__jemalloc_
```

Running
=======

By default, this program will load a PE image specified on the command-line, 
call the entry point, and exit once that returns. If the entry point does not 
return in 10 seconds, the program will abort with SIGALRM.

Extending
=========

Debug modules
-------------

A *debug module* is an extension to efiperun that can run code before and after 
loading a PE image. This is useful to install protocols beforehand that the PE 
image will use or to access the protocols that the PE image installed 
afterwards.

A module should include ```debugmodule.h``` and call 
```register_debug_module``` in its constructor to register one or two functions 
that will be called before or after loading PE images.

An example module is provided in ```debugmodule_example.cpp```. This module 
will read ACPI table data dumped to a directory ```acpi``` by ```acpidump -b``` 
and store that using the EfiAcpiSupportProtocol stubs.

main.h
------
Include this if you want access to protocol handling, global debugging 
information and utility functions.

```find_protocol``` and ```install_protocol``` mimic LocateProtocol and 
InstallProtocolInterface from EFI's BootServices.

```register_memory``` and ```lookup_memory``` are interfaces into the memory 
tracking system. All memory allocated/accessed by EFI modules should be 
registered through this system so that other parts can see where certain data 
stored in memory came from.

```char16_print``` prints a UCS-2 string to a multibyte console, prefixing each 
line with a fixed string.

efihooks.hpp
------------
Include this if you want to generate lots of stub functions automatically. You 
can choose from 3 kinds of stubs: Abort (prints function name and exits the 
program), Print (prints function name and arguments and returns EFI_SUCCESS) 
and Dummy (returns EFI_SUCCESS). The most convenient way to create these is 
using the ```ABORTHOOK```, ```DUMMYHOOK``` and ```PRINTHOOK``` macros.

You can also create a whole stub interface with N stub functions by 
instantiating ```DummyInterface<N>```.

Internals
=========

efiperun.cpp - efihooks.cpp
---------------------------
The brains of the operation. `efiperun` is mostly in charge of memory 
management and execution control while `efihooks` installs most of the 
standard protocol interfaces. Note that we use a custom memory allocator so 
that we can keep track of which module allocates memory. Memory is generally 
never freed.

stubs.cpp - stubs.h
-------------------
Implementing minimal functionality to make the environment look like EFI. This 
is where BootServices functions such as AllocatePool, CopyMem, etc. are 
defined.

peloader.c - peloader.h - PeImage.h
-----------------------------------
A simple PE image loader that does relocation. This should be fairly 
stand-alone. Only tested on 64-bit images.
