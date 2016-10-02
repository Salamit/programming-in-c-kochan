// Exercise 7 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex7.c

// Program to illustrate purpose of a decimal point before 
// the field width specification in a printf statement 
// The field with ensures the presence of 2 decimal places after
// the value of the dollar.

#include <stdio.h>

int main (void) 
{
	int dollars, cents, count;

	for ( count = 1; count <= 10; ++count ) 
		{ 
			printf ("Enter dollars: ");
			scanf ("%i", &dollars);
			printf ("Enter cents: ");
			scanf ("%i", &cents);
			printf ("$%i.%.2i\n\n", dollars, cents); 
		}

	return 0;
}
