// Exercise 10 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex10.c

// Program to check if a number is a prime and return '1' if it is and '0' if it isn't

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int p, i;
	bool isPrime;

	printf("What number do you want to check if it is a prime? \n");
	scanf ("%i", &p);

	isPrime = true;
	
	//exclude 1, 2 and 3 because they are all prime numbers
	//thus immediately print 1 once any of these numbers are detected.
	if (p == 1 || p == 2 || p == 3)
		printf("1\n");

	else if(p > 3)
	{
		//The expression p / i >= i is used as a test to ensure that 
		//the value of p does not exceed the square root of i
		//I borrowed the concept from Example 4 of Chapter 7 (7.4)
		for ( i = 2; isPrime && p / i >= i; ++i )
		{
			if (p % i == 0 )
			{
				isPrime = false;
			}

		} 
		
		//after loop is completed, if isPrime is still true print 1
		if (isPrime == true )
			printf("1\n");

		//after loop is completed, if isPrime is false print 0
		else
			printf("0\n");
			
	}

	else
		printf("Unknown input. Why must you be so difficult?\n");



	return 0;

}


