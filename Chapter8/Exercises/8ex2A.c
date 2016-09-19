// Example 4 from Chapter 8 of Programming in C, 3rd Edition
// File 8eg4.c

// FUnction to calculate the nth triangular number

#include <stdio.h>

int calculateTriangularNumber (int n)
{
	int i, triangularNumber = 0;

	for ( i = 1; i <= n; ++i )
		triangularNumber += i;

	return triangularNumber;

	
}

int main(void)
{
	int result;

	result = calculateTriangularNumber (10);
	printf("Triangular number of 10 is %i\n", result);
	result = calculateTriangularNumber (20);
	printf("Triangular number of 20 is %i\n", result);
	result = calculateTriangularNumber (50);
	printf("Triangular number of 50 is %i\n", result);

	return 0;
}