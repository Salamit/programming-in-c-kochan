// Exercise 2 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex2.c

// Program to print a table of numbers and their squares.

#include <stdio.h>

int main()
{

	int n, sqr;
	printf("TABLE OF SQUARES\n\n");
	printf("n     Square of n\n");
	printf("---   -----------\n");

	sqr = 0;

	for (n = 1; n <= 10;  ++n ) 
	{
		sqr = n * n;
		printf("%2i        %i\n", n, sqr);
	}

	return 0;


}
