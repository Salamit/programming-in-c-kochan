// Exercise 9 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex9.5.4.c

// Program asks for user input to generate a table of triangular numbers
// using a while statement

#include <stdio.h>

int main (void)
{
	int n, number, triangularNumber;

	printf("What triangular number do you want? ");
	scanf ("%i", &number);

	triangularNumber = 0;

	n = 1;
	while(n <= number)
	{
		triangularNumber += n;
		++n;
	}

	printf("Triangular number is %i is %i\n", number, triangularNumber);

	return 0;
}
