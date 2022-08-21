# Avery
Avery is an vector animation program written in C. It is very similar to, but not entirely, Adobe Animate and the older Macromedia Flash.

# Goals
- Make web games.
- Make vector based animation.
- Make interactive content for the web.
- Be entirely free (as in freedom) software.
- Be able to import raster based images made in another program such as krita.

# Dependencies
There are the following dependencies:
1. GTK3 (Required for runtime)
2. Cairo (Required for runtime)
4. CMake (Requiring for building)
5. A build system of your choice such as GNU Make or ninja (Required for building)


# Building
To build, at the root of the project run the following:
`cmake -B bin -S . -G "<Build system of your choice>"` replacing <> with whatever build system you want such as GNU Make or ninja. Lets say you wanted to use GNU Makefiles, you would run `cmake -B bin -S . -G "Unix Makefiles"` Then `cd bin` and if for example you decided on makefiles, just run `make`.

# License
Avery is licensed under the terms of the GNU General Public License version 3.0 or greater. See COPYING for more information about the license. While this has not happened yet, but because there is a possibility some parts may be licensed under the GNU Lesser General Public License version 3.0 (or greater), COPYING.LESSER has been included so you may know how it is different from GPLv3.


# TODO
I am working on getting the UI sorted out. I don't know right now how to layout it, but I have inspiration from GIMP.
![GIMP](https://raw.githubusercontent.com/AveryOfficial/Avery/main/screenshots/GIMP_2.10.jpg)

As well as Macromedia Flash Professional 8 which I'll admit I have nostalgia for.
![MACROMEDIA](https://raw.githubusercontent.com/AveryOfficial/Avery/main/screenshots/Macromedia.png)

The UI again, is a work in progress, but I aim right now to be based off the two listed programs.




I hope you find this program to be useful. Don't hesitate to send a PR or open an issue if you have something that would be useful for the project.
