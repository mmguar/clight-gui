# CLight GUI

Clight GUI written in Qt.

Huge thanks to @FedeDP for writing [Clight](https://github.com/FedeDP/Clight) and [Clightd](https://github.com/FedeDP/Clightd/), the daemons upon which this is built on. They are also a requirement for this program ;)

## Features
Support for configuring & managing Clight with a pretty GUI interface! It also includes a tray applet, suitable for quickly managing the backlight settings. All modules in clight are currently able to be managed. Multiple monitors are supported in the window, but only one is supported in the applet.

## Building
Requires cmake, Qt5/6, and Qt charts. The DBus C++ interfaces are generated based on the XML files for Clight.

## Installing
There is no install files; I need to figure out how to do that, but PRs are welcome!
