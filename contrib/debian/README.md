
Debian
====================
This directory contains files used to package fertcoind/fertcoin-qt
for Debian-based Linux systems. If you compile fertcoind/fertcoin-qt yourself, there are some useful files here.

## fertcoin: URI support ##


fertcoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install fertcoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your fertcoinqt binary to `/usr/bin`
and the `../../share/pixmaps/bitcoin128.png` to `/usr/share/pixmaps`

fertcoin-qt.protocol (KDE)

