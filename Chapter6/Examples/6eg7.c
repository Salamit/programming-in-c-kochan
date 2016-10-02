// Example 7 from Chapter 6 of Programming in C, 3rd Edition
// File 6eg7.c

// Program to categorize a single character that is entered at the terminal

#include <stdio.h>

int main (void) {

	char c;
	printf("Enter a single character:\n");
	scanf ("%c", &c);

	if ( (c >= 'a' && c<= 'z') || (c >= 'A' && c <= 'Z') )
		printf ("It's an alphabetic character.\n");
	else if ( c >= '0' && c <= '9' )
		printf("It's a digit.\n");
	else 
		printf("It'S a special character.\n");

	return 0;
}
