// Example 1 from Chapter 18 of Programming in C, 3rd Edition
// File 18eg1.c

/* Adding Debug Statements with the preprocessor				*/

#include <stdio.h>
#define DEBUG 

int process (int i, int j, int k)
{
	return i + j + k;
}

int main (void)
{
	int i, j, k, nread;

	nread = scanf ("%d %d %d", &i, &j, &k);

#ifdef DEBUG
	fprintf (stderr, "Number of integers read = %i\n", nread);
	fprintf(stderr, "i = %i, j = %i, k = %i\n", i, j, k);
#endif

	printf("%i\n", process (i, j, k));
	return 0;  
}