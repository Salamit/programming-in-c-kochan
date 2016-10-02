// Example 2 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg2.c

/* Program to illustrate that a minus sign placed in front of 
a field width specification causes the field to be 
displayed left-justified. 				*/
// Rather than using example 5.2, I have used exercise 5.2 because
// the left justified formarting is better illustrated 
// by using a table. 

#include <stdio.h>

int main (void)
{

	int n, triangularNumber;

	triangularNumber = 0;

	for ( n = 1; n <= 200; n = n + 1)
		triangularNumber = triangularNumber + n;

	printf("  %-2i          %i\n", n, triangularNumber);

	return 0;
	
}

