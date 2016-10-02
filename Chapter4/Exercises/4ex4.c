// Exercise 4 from Chapter 4 of Programming in C, 3rd Edition
// File 4ex4.c

/* This program converts 27 degrees from Fahrenheit (F) to 
degrees Celsius. */

#include <stdio.h>

// The 3 lines after the comments define constants - which basically means
// that names are given to a literal. So in the first example below
// THIRTYTWO is used as a name and replacement for 32.0. 
// This is supposed to make program wide changes easier than if
// the numbers were used. (Admitably my names could be better)


#define THIRTYTWO      32.0   // changed 32 a float: '32.0' to avoid any mishaps in calculations
#define ONEPOINTEIGHT  1.8
#define TWENTYSEVEN    27.0

int main()
{
	float converted;				//Placeholder for 27 deg converted to celsius

	converted = (TWENTYSEVEN - THIRTYTWO) / ONEPOINTEIGHT;
	printf("The value of 27 degrees F in C is %f\n", converted);

	return 0;
}


