# Calcify
A nice little compact text based calculator

Latest changes:

2022-07-22 (v0.6.220722)
- Python migration started
- All features except the conversion tool have been ported
- Ported stripped down version of complex calculation tool
- Updated language support
- Translation completed in English and Hungarian

2021-02-05 (v0.6.0205):
- started replacing scanf functions with fgets
- added core function "calcUnit". it replaces the old comands consisting of a lot of printf functions. it can be modified very easily
- added "headerAdv" function which extends the abilities of the "header" function. it makes some printf lines be unnecesarry.
- moved some strings from the convert header to the language header
- replaced old library commands with the "libList" function. it also saves some lines
- Hungarian translation is still incomplete
- basic calculation mode doesn't work properly
- removed some electrical and physics formulas

2021-02-04 (v0.6.0204):
- Translated program from C++ to C
- Removed the complex number functionality inlcuding complex.h
- Removed stat.h
- Changed develper company to from K.Tech to Seven Studios
- Changed most floats to double
- Added "cls" to header function
- Changed formatting of main.c, language_en.h and language_hu.h to ISO 8859-2
- Multiple language support
- Added translation option in config.h
- Added Hungarian translation
- Physics calculations now show formula next to the result
- Added new main menu item: Library
- The Library offers equations, definitions and formulas to the user
- Added phyisics equations from calculator
- Library translation for Hungarian required
- scanf skip issue at acceleration calculation
