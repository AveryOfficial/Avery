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


# TODO
Right now I just want to get the basic UI setup. I'm using GIMP as a big reference for code and GTK widget usage, so a big thank you to GIMP. I don't know how the overall UI will look like, but it will for the time being look similar to GIMP.

I am not saying it will be a 1:1 copy of GIMP, just a quick GIMP like UI and will make many changes later. If you're not familiar with GIMP, here's a picture of it:
![GIMP](https://raw.githubusercontent.com/AveryOfficial/Avery/main/screenshots/GIMP_2.10.jpg)



I hope you find this program to be useful. Don't hesitate to send a PR or open an issue if you have something that would be useful for the project.
