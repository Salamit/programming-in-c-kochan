// Exercise 7 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex7.c

// Program find all prime numbers up to n = 150

// This was a hard one. Converting the algorithm to code was difficult to do
// I got help from the following sites
// goo.gl/tQLBII
// goo.gl/wZByC8
// http://goo.gl/72w6JH - powerpoint document 

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	
	//Define an array of integers P - which in this case is 150.
	int P[151];
	int i, j, n;

	n = 150;

	//Set all elements P[i] to 0, 2 <= i <= n
	for (i = 2; i <= n; ++i)
	{
		P[i] = 0;
	}

	// Set i to 2. 
	i = 2;

	// If i > n the algorithm terminates
	while ( i <= n)
	{
		// If P[i] = 0 then i is prime.
		if (P[i] == 0)
		{
			printf("%i is a prime\n", i);  //print the prime number
		}


		// For all positive integer values
		j = 1;
		
		//such that  i * j <= n
		while ( (i * j) <= n )
		{
			// set P[i * j] = 1
			P[i * j] = 1;


			++j; //No explicit instruction given to do this but logically necessary
		}

		++i; //No explicit instruction given to do this but logically necessary
	}
	
	/*

	//The below does the same above but uses a for loop.
	for (i = 2; i <= n; ++i ){

		if (P[i] == 0)
		{
			printf("%i is a prime\n", i);
		} 

		
		for ( j = 1; (i * j) <= n; ++j){
			P[i * j] = 1;
		}


	}
	*/

	return 0;
}
