# Makefile for the Beamrider project
CSC=iphonesim-csc
OBJECTS=beamrider
MODULES=beamrider
FLAGS=

.PHONY: all clean

all: modules

modules:
	make Scheme/Makefile
	xcodebuild -configuration Debug -sdk iphonesimulator3.1.2

# %::%.scm
# 	$(CSC) $@.scm -o ../cgi-bin/$@ $(FLAGS)

clean:
	rm $(OBJECTS)

