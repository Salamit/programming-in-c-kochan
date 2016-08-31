// Example 8 from Chapter 6 of Programming in C, 3rd Edition
// File 6eg8.c

/* Program to evaluate simple expressions of the form
number operator number */ 

#include <stdio.h>

int main (void)
{
	float value1, value2;
	char operator;

	printf("Type in your expression.\n");
	scanf ("%f %c %f", &value1, &operator, &value2);

	if ( operator == '+')
		printf("%.2f\n", value1 + value2);
	else if ( operator == '-' )
		printf("%.2f\n", value1 - value2);
	else if (operator == '*' )
		printf("%.2f\n", value1 * value2);
	else if (operator == '/')
		printf("%.2f\n", value1 / value2);

	return 0;


}