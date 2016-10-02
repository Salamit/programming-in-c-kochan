// Example 1 from Chapter 6 of Programming in C, 3rd Edition
// File 6eg1.c

// Program to calculate the absolute value of an integer

#include <stdio.h>

int main (void) {
	int number;
	
	printf ("Type in your number: "); 
	scanf ("%i", &number);
	
	if ( number < 0 ) 
		number = -number;

	printf ("The absolute value is %i\n", number);

	return 0; 

}
