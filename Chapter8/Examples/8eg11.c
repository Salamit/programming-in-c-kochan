// Example 11 from Chapter 8 of Programming in C, 3rd Edition
// File 8eg11.c

// Changing Array Elements in Funtions

#include <stdio.h>

void multiplyBy2 (float array[], int n)
{
	int i;

	for ( i = 0; i < n; ++i )
		array[i] *= 2;

}

int main (void)
{ 
	float floatVal[4] = { 1.2f, -3.7f,6.2f, 8.55 };
	int   i;
	void  multiplyBy2 (float array[], int n);

	for ( i = 0; i < 4; ++i )
		printf("%.2f   ", floatVal[i]);

	printf ("\n");

	return 0;
}