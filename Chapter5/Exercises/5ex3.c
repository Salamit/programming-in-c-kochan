// Exercise 3 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex3.c

// Program to generate a table of triangular numbers for every
// fifth triangular number between 5 and 50. 

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n     Triangular number\n");
	printf("---   -----------------\n");

	triangularNumber = 0;

	for (n = 5; n <= 50;  n = n + 5 ) {
		triangularNumber = n * (n + 1) / 2 ;
		printf("%2i              %i\n", n, triangularNumber);
	}

	return 0;
}

				