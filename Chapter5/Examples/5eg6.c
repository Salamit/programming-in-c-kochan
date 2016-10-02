// Example 6 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg6.c

// Program to introduce the while statement

#include <stdio.h>

int main (void)
{

	int count = 1;

	while ( count <= 5 ) {
		printf("%i\n", count);
		++count;
	}

	return 0;
}
