CC=gcc
CXX=g++
CFLAGS=-I/usr/include/efi -I/usr/include/efi/x86_64 -I. -DGNU_EFI_USE_MS_ABI -g
CCFLAGS=$(CFLAGS) -std=gnu99
CXXFLAGS=$(CFLAGS) -std=c++11
LDFLAGS=
LIBS=-lpthread

SOURCES=peloader.c efiperun.cpp efihooks.cpp stubs.cpp debugmodule_example.cpp vast/filesystem.cpp
OBJECTS=stubs.o peloader.o efiperun.o efihooks.o debugmodule_example.o vast/filesystem.o jemalloc_custom.a
OUTPUT=efiperun

all: $(SOURCES) $(OUTPUT)
	
$(OUTPUT): $(OBJECTS)
	$(CXX) $(LDFLAGS) $^ $(LIBS) -o $@

.c.o:
	$(CC) $(CCFLAGS) -c $< -o $@

stubs.cpp: jemalloc_custom.h

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OUTPUT)

jemalloc_custom.h:
	cp jemalloc-3.6.0/include/jemalloc/jemalloc.h jemalloc_custom.h

jemalloc_custom.a:
	objcopy --redefine-sym mmap=wrapped_mmap jemalloc-3.6.0/lib/libjemalloc_pic.a jemalloc_custom.a 
