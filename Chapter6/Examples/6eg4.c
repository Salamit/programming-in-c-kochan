// Example 4 from Chapter 6 of Programming in C, 3rd Edition
// File 6eg4.c


// Program to determine if a number is even or odd (Ver. 2)
#include <stdio.h>
int main () 
{
	int number_to_test, remainder;
	
	printf ("Enter your number to be tested: "); 
	scanf ("%i", &number_to_test);
	
	remainder = number_to_test % 2;

	if ( remainder == 0 )
		printf ("The number is even.\n");

	else
		printf ("The number is odd.\n");

	return 0; 

}
