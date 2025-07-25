# Advanced Effects

A good-looking open-source animation software inspired on Friction, Glaxnimate, and MuseScore!

- Clean and easy-to-grasp codebase
- Good looking

## Ethical warning

This piece of software wouldn't be available without the sustained hard work and research of the authors of Friction, Glaxnimate, and MuseScore. If you are honest, **you should not** **resell copies** of this software. More details on how GNU GPL v2 works: https://choosealicense.com/

YOU came here looking for a free SVG animation alternative to propietary software. Do something good for the rest :)

## Why this

The idea of developing this was born out of frustration with Friction's codebase and Glaxnimate's poor UI.

## How to run

I recommend using Qt Creator to run this software as it does most things for you.

You **can't install Qt through the system manager** because in Ubuntu only Qt 6.4 is distributed and **6.9** is required to run this.

- CMake and Ninja
- C++17 compiler
- Qt 6.9+ with QtQuick 2
- FFmpeg (libav)
- Skia

If you **don't want** to use **Qt Creator**, here's how to run the software:

## Credits

- The UI is inspired on After Effects and, mostly, MuseScore.
- The codebase is inspired on Akira and Glaxnimate.
- Experience was gained contributing to Friction/enve2d.
- The template used is: https://github.com/emericg/QmlAppTemplate

Thanks to all who made this possible :heart: (rodlie, MaurycyLiebner, Alecadd, MuseScore team, emericg) and the Friction community.


## Debug

Set these environment variables to inspect the application:

- `QML_IMPORT_TRACE`: When set to 'ON', shows the QML Engine log when importing modules (is a Qt environment variable).
- `APP_LIST_QRT`: When set to '1', prints the Qt Resource Tree (`src/application/main.cpp`)
