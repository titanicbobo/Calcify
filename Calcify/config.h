#ifndef config_h
#define config_h
	
const int ver_major = 0;
const int ver_minor = 6;
const char ver_build[] = "0204";
const char status[] = "beta";

double PI = 3.1415;

#define lang 1

	#if lang == 1
	#include "language_en.h"
	#endif // lang = "en"

	#if lang == 2
	#include "language_hu.h"
	#endif // lang = "hu"


#endif // !config_h


