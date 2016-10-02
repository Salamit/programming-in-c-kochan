// Exercise 2 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex2.c


// Program is a modified version of 7eg1.c. The elements of the array values are initialized 
// to 0 by using a for loop to perform the initialization.

#include <stdio.h>

int main (void)
{
	int values[10];
	int index;

	for ( index = 0; index < 10; ++index )
		values[index] = 0;

	printf("\n\n Subscript   Element\n");
	printf("_______ ___________________\n");

	for ( index = 0; index < 10; ++index )
		printf("%4i%14i\n", index, values[index]);




	return 0;
}
