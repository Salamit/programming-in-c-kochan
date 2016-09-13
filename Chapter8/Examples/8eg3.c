// Example 3 from Chapter 8 of Programming in C, 3rd Edition
// File 8eg3.c

#include <stdio.h>

void printMessage (void)
{
	printf("Programming is fun.\n");
}

int main (void)
{
	int i;

	for ( i = 1; i <= 5; ++i )
		printMessage ();

	return 0;
}

