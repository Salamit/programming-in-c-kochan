// Exercise 4 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex4.c

// Program to generate a table of the first 10 factorials


#include <stdio.h>

int main()
{

	int n, nf = 1;

	printf("TABLE OF FACTORIALS\n\n");
	printf(" n       Factorial\n");
	printf("---   --------------\n");

	for (n = 1; n < 11; n++)
	{
		nf *= n;

		printf("%2i          %i\n", n, nf);


	}

	return 0;



}
