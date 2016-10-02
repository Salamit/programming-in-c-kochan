// Exercise 2 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex2.c

// Program to evaluate if a given number is evenly divisible by a third. 

#include <stdio.h>

int main()
{
	int number1, number2, result;


	//Ask user for two integers

	printf("Please provide 2 integers:\n");

	//Save integers into variables
	scanf("%i %i", &number1, &number2);

	//Calculate divisibility of the first number to the second.
	result = number1 % number2;
	//Conditional for print statements

	if (result == 0)
	{
		printf("%i is evenly divisible by %i\n", number1, number2);
	}

	else if (result != 0)
	{
		printf("%i is not evenly divisible by %i\n", number1, number2);
	}

	else 
	{
		printf("Invalid input\n");
	}

	return 0;
}



