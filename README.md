# Avery
Avery is an animation program written in C.

# Dependencies
There are the following dependencies:
1. GTK3 (Required for runtime)
2. Cairo (Required for runtime (Not yet, will in the future))
3. libmypaint (Required for runtime (Not yet, will in the future))
4. CMake (Requiring for building)
5. A build system of your choice such as GNU Make or ninja (Required for building)


# Building
To build, at the root of the project run the following:
`cmake -B bin -S . -G "<Build system of your choice>"` replacing <> with whatever build system you want such as GNU Make or ninja. Lets say you wanted to use GNU Makefiles, you would run `cmake -B bin -S . -G "Unix Makefiles"` Then `cd bin` and if for example you decided on makefiles, just run `make`.

# License
Avery is licensed under the terms of the GNU General Public License version 3.0 or greater. See COPYING for more information about the license. While this has not happened yet, but because there is a possibility some parts may be licensed under the GNU Lesser General Public License version 3.0 (or greater), COPYING.LESSER has been included so you may know how it is different from GPLv3.





I hope you find this program to be useful. Don't hesitate to send a PR or open an issue if you have something that would be useful for the project.
