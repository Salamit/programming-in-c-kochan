// Exercise 5 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex5.c


//Prints out 1 1 2 4 8 16 32 64 128 256
//Can't yet figure out how.

#include <stdio.h>

int main (void)
{
	int numbers[10] = { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int i, j;

	for ( j = 0; j < 10; ++j )
		for ( i = 0; i < j; ++i )
			numbers[j] += numbers[i];


	for ( j = 0; j < 10; ++j )
		printf("%i ", numbers[j]);

	printf("\n");

	return 0;
}
