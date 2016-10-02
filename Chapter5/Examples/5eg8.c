// Example 8 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg8.c

// Program to reverse the digits of a number

#include <stdio.h>

int main (void)
{

	int number, right_digit;

	printf("Enter your number.\n");
	scanf ("%i", &number);

	while ( number!= 0) {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;
	}

	printf("\n");

	return 0;
}
