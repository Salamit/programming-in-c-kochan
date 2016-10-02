// Exercise 6 from Chapter 4 of Programming in C, 3rd Edition
// File 4ex6.c

/* This program evaluates a polynomial */

#include <stdio.h>

// The 3 lines after the comments define constants - which basically means
// that names are given to a literal. So in the first example below
// THIRTYTWO is used as a name and replacement for 32.0. 
// This is supposed to make program wide changes easier than if
// the numbers were used. (Admitably my names could be better)


#define		THREE	3.0
#define		FIVE	5.0
#define		SIX		6.0
#define		X		2.55

int main()
{

	float answer;						//Placeholder for result

	//The polynomial - this could be done differently
	answer = THREE * X * X * X - FIVE * X * X + SIX; 

	printf("The result of the polynomial is %f\n", answer); 

	return 0;

}
