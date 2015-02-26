CXX=g++
CXXFLAGS=-std=c++11

SOURCES=dmp2seg.cpp
OBJECTS=dmp2seg.o
OUTPUT=dmp2seg

all: $(SOURCES) $(OUTPUT)
	
$(OUTPUT): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $^ -o $@

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(OUTPUT)
