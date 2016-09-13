// Example 2 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex2.c

#include <stdio.h>

void printMessage (void)
{
	printf("Programming is fun\n");
}

int main (void)
{
	printMessage ();
	printMessage ();

	return 0;
}