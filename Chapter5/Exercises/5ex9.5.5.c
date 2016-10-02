// Exercise 9 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex9.5.5.c

// Program asks for user input 5 times 
// and each time uses the input 
// to generate a table of triangular numbers
// using a while statement

#include <stdio.h>

int main(void)
{

	int n, number, triangularNumber, counter;

	counter = 1;
	while(counter <= 5)
	{
		printf("What triangular number do you want? ");
		scanf ("%i", &number);

		triangularNumber = 0;

		n = 1;
		while(n <= number)
		{
			triangularNumber += n;
			++n;
		}

		printf("Triangular number %i is %i\n\n", number, triangularNumber);

		++counter;

	}


	return 0;
}
