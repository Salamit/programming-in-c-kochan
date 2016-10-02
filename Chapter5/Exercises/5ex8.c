// Exercise 8 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex8.c

// Program asks the user for a number and generates
// a table of triangular numbers, as many times the users gave
// according to the number given by the user. 

#include <stdio.h>

int main(void)
{

	int n, number, triangularNumber, counter, numberOfTriangulars;

	printf("How many triangular numbers would you like\n");
	printf("to calculate?\n");
	scanf("%i", &numberOfTriangulars);

	for (counter = 1; counter <= numberOfTriangulars; ++counter ) {
		printf("What triangular number do you want? ");
		scanf ("%i", &number);

		triangularNumber = 0;

		for ( n = 1; n <= number;  ++n)
			triangularNumber += n;

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
