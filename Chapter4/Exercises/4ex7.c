// Exercise 7 from Chapter 4 of Programming in C, 3rd Edition
// File 4ex7.c

/* This program evaluates an expression and displays the results 
using exponential format*/

#include <stdio.h>

int main()
{

	float result;				//placeholder for result. 

	//the expression in exponential format
	result = (3.31e-8 * 2.01e-7) / (7.16e-6 + 2.01e-8); 

	printf("The result of the expression is %g\n", result);

	return 0;
}
