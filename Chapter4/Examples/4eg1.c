// Example 1 from Chapter 4 of Programming in C, 3rd Edition
// File 4eg1.c

/* This program shows the basic c data types */


#include <stdio.h>

int main (void)
{
	int 	integerVar = 100;
	float	floatingVar = 331.79;
	double	doubleVar = 8.44e+11;
	char	charVar = 'W';

	_Bool	boolVar = 0;

	printf("integerVar = %i\n", integerVar);
	printf("floatingVar = %f\n", floatingVar);
	printf("doubleVar = %e\n", doubleVar);
	printf("doubleVar = %g\n", doubleVar);
	printf("charVar = %c\n", charVar);

	printf("boolVar = %i\n", boolVar);

	return 0;
}
