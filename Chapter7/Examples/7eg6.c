// Example 6 from Chapter 7 of Programming in C, 3rd Edition
// File 7eg6.c

// Program introducing character arrays.


#include <stdio.h>

int main (void)
{
	char word[] = {'H', 'e', 'l', 'l', 'o', '!' };
	int i;

	for ( i = 0; i < 6; ++i )
		printf("%c", word[i]);

	printf("\n");
}
