// Example 2 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg2.c

/* Program to caluculate the 200th triangular number
   Introduction of the for statement					*/

#include <stdio.h>

int main (void)
{

	int n, triangularNumber;

	triangularNumber = 0;

	for ( n = 1; n <= 200; n = n + 1)
		triangularNumber = triangularNumber + n;

	printf("The 200th triangular mumber is %i\n", triangularNumber);

	return 0;
	
}

