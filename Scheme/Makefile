all: beamrider.c debug

beamrider.c: beamrider.scm
	csc -e -emit-external-prototypes-first -local -optimize-level 0 -d2 -scrutinize -t beamrider.scm

debug:
	xcodebuild -configuration Debug -project ../beamrider.xcodeproj

release:
	xcodebuild -configuration Release -project ../beamrider.xcodeproj

clean:
	rm -f beamrider.c
