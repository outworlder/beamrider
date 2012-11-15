# Chicken Scheme under iOS

## How it works (or should)

Inside the `Chicken` directory, you'll find the sources to the C version of the Chicken Scheme interpreter (mainly `chicken.h` and `runtime.c`), plus several other files the Scheme code is using.

The Scheme code is being compiled to a file called `beamrider.c`. The sources are found in the `Scheme` directory and can be compiled with the Makefile found there. In fact, the Makefile compiles the whole project (calling `xcodebuild`).

## TODO

* Make work again. It is segfaulting at the moment, on both the device and the simulator. Hey, at least it compiles.
* There are several issues with the current project. For instance, we are using chicken-config.h, manually disabling the apply-hack. This file is generated and should be properly created when cross-compiling. Flags are being set in the XCode project (such as `-DC_EMBEDDED`). There are also other stuff I've likely forgot that I had to do in order to make it work.
* Enable the remote repl again. I had trouble with the `tcp` unit (with `-ignore-repository`) so I disabled it to be safe.
* Cross-compile Chicken and try to run it, instead of just compiling the sources
* After that is done, create a tool to automate that.
* Objective-C <-> Scheme bridge. Since the code is compiled, we could do it without resorting to runtime trickery and just generate code. This would make arbitrary calls in the REPL difficult though, but may be an acceptable trade-off.
