// Exercise 10 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex10.c

// Program to reverse the digits of a number and showing that
// a negative input e.g. -234 outputs -4-3-2

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
