// Exercise 3 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex3.c

// Program to evaluate if a given number is evenly divisible by a third. 

#include <stdio.h>

int main()
{
	float number1, number2;

	//Ask user for two numbers

	printf("Please provide 2 numbers:\n");

	//Save numbers as floats into variables
	scanf("%f %f", &number1, &number2);

	if (number2 != 0)
	{
		printf("The value of %i divided by %i is\n", (int)number1, (int)number2);
		printf("to 3 decimal places is %.3f\n", number1/number2);
	}

	else 
		{
			printf("Imagine that you have zero cookies\n" );
			printf("and you split them evenly among zero friends.\n");
			printf("How many cookies does each person get?\n");
			printf("See? It doesn’t make sense. \n");
			printf("And Cookie Monster is sad that there are no cookies,\n");
			printf("and you are sad that you have no friends.\n");
		}

	return 0;



}


