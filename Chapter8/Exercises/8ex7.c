// Exercise 7 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex7.c

/* Program that raises an integer to a positive integer power */

#include <stdio.h>

long int x_to_the_n (int x, int n);


long int x_to_the_n (int x, int n)
{
	long int result = 1;
	// multiply x by itself n times

	for ( int i = 1; i <= n; ++i)
	{
		result *= x;

	}

	



	// return the result

	return result;


}



int main(void)
{
	int x, n;
	long int result;

	// Get value of x 

	printf("What integer do you want to raise to a power? \n");
	scanf ("%i", &x);

	// Get value of n and Check that n is a positive value

	do
	{
		printf("To what power? \n");
		scanf ("%i", &n);

	} while( n < 1);


	// call x_to_the_n
	result = x_to_the_n (x, n);


	// print result
	printf("%i to the power %i is %li\n", x, n, result );


	return 0;
}