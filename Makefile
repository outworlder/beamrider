# Makefile for the Beamrider project
CSC=iphonesim-csc
OBJECTS=beamrider
MODULES=beamrider
FLAGS=

.PHONY: all clean

all: modules $(OBJECTS) 

modules:
	$(CSC) -s beamrider.scm -o beamrider  $(FLAGS)

%::%.scm
	$(CSC) $@.scm -o ../cgi-bin/$@ $(FLAGS)

clean:
	rm $(OBJECTS)

