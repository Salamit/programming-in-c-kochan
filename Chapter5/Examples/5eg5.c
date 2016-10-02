// Example 5 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg5.c

// Program asks for user input 5 times 
// and each time uses the input 
// to generate a table of triangular numbers

#include <stdio.h>

int main(void)
{

	int n, number, triangularNumber, counter;

	for (counter = 1; counter <= 5; ++counter ) {
		printf("What triangular number do you want? ");
		scanf ("%i", &number);

		triangularNumber = 0;

		for ( n = 1; n <= number;  ++n)
			triangularNumber += n;

		printf("Triangular number %i is %i\n\n", number, triangularNumber);
	}

	return 0;
}
