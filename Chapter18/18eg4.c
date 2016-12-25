// Example 4 from Chapter 18 of Programming in C, 3rd Edition
// File 18eg4.c

/* A Simple Program for Use with gdb */

#include <stdio.h>

int main(void)
{
	const int data[5] = {1, 2, 3, 4, 5};
	int i, sum;

	for (i = 0; i >= 0; ++i)
		sum += data[i];

	printf("sum %i\n", sum);

	return 0;
}
