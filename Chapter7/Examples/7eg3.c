// Example 3 from Chapter 7 of Programming in C, 3rd Edition
// File 7eg3.c

// Program to generate the first 15 Fibonacci numbers

#include <stdio.h>

int main (void)
{
	int Fibonacci[15], i;

	Fibonacci[0] = 0; // by definition
	Fibonacci[1] = 1; // ditto

	for ( i = 2; i < 15; ++i )
		Fibonacci[i] = Fibonacci[i-2] + Fibonacci[i-1];

	for (i = 0; i < 15; ++i )
		printf("%i\n", Fibonacci[i]);

	return 0;
}
