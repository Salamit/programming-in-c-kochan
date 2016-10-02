// Exercise 5 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex5.c

// Program to reverse the digits of a number using a do-while loop

#include <stdio.h>

int main()
{

	int number, right_digit;

	printf("Enter your number.\n");
	scanf ("%i", &number);

	if (number > 1)
	{

		do {
			right_digit = number % 10;
			printf("%i", right_digit);
			number = number / 10;

		} while ( number != 0 );

	
	}

	else if (number < 1)
	{
		number /= -1;

		printf("-"); //This is perhaps my greatest solution ever.
		//Simply because of how easy the solution was.
		//Coming up with such a solution however was difficult.  

		// Though I suspect that it might not work for all situations.


		do {
			right_digit = number % 10;
			printf("%i", right_digit);
			number = number / 10;

		
		} while ( number != 0 );

		
	
	}

	

	printf("\n");

	return 0;
	
}
