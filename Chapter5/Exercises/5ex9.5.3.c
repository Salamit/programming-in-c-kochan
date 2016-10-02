// Exercise 9 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex9.5.3.c

// Program to generate a table of triangular numbers
// using a while statement

#include <stdio.h>

int main (void)
{
	int n, triangularNumber;
	printf("TABLE OF TRIANGULAR NUMBERS\n\n");
	printf("n     Sum from 1 to n\n");
	printf("---   ---------------\n");

	triangularNumber = 0;

	n = 1;
	while(n <= 10)
	{
		triangularNumber +=  n;
		printf("%2i            %i\n", n, triangularNumber);

		++n;

	}


	return 0;
}

				