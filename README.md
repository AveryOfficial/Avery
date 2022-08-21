# Avery
Avery is an animation program written in C.

# Dependencies
You need a C compiler such as gcc or clang to build along with CMake as well as a build system such as ninja or GNU Make. The following dependencies are required for running the program:
1. GTK3

You only need CMake, gcc or clang, and an additional build system if you wish to build or modify the program and then build it. They are not required for running it.

# Building
To build, at the root of the project run the following:
`cmake -B bin -S . -G "<Build system of your choice>"` replacing <> with whatever build system you want such as GNU Make or ninja. Lets say you wanted to use GNU Makefiles, you would run `cmake -B bin -S . -G "Unix Makefiles"` Then `cd bin` and if for example you decided on makefiles, just run `make`.

# License
This program is licensed under the terms of the GNU General Public License version 3.0. See LICENSE for more details about the license and how you can follow it.

I hope you find this program to be useful. Don't hesitate to send a PR or open an issue if you have something that would be useful for the project.
