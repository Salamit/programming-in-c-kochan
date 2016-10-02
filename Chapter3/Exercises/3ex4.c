// Exercise 4 from Chapter 3 of Programming in C, 3rd Edition
// File 3ex4.c

/* This program subtracts 15 from 87 and displays the result */

#include <stdio.h>

int main (void)
{
	// Declare variables
	int value1, value2, difference;

	// Assign values and calculates their difference
	value1 = 87;
	value2 = 15;
	difference = value1 - value2;

	// Display the result
	printf("The difference of %i and %i is %i\n", value1, value2, difference);

	return 0;
}
