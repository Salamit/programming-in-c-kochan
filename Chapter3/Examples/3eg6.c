// Example program 3.6 from Programming in C, 3rd Edition
// File 3eg6.c

/* This program adds two integer values and displays the results */

#include <stdio.h>

int main (void)
{
	// Declare variables
	int value1, value2, sum;

	// Assign values and calculates their sum
	value1 = 50;
	value2 = 25;
	sum = value1 + value2;

	// Display the result
	printf("The sum of %i and %i is %i\n", value1, value2, sum);

	return 0;
}
