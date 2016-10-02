// Example 9 from Chapter 5 of Programming in C, 3rd Edition
// File 5eg9.c

// Program to reverse the digits of a number using a do-while loop

#include <stdio.h>

int main()
{

	int number, right_digit;

	printf("Enter your number.\n");
	scanf ("%i", &number);

	do {
		right_digit = number % 10;
		printf("%i", right_digit);
		number = number / 10;

	}

	while ( number != 0 );

	printf("\n");

	return 0;
	
}
