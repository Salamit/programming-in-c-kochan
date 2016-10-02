//NOT COMPLETED!
//NOT COMPLETED!
//NOT COMPLETED!

// Exercise 7 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex7.c

// I wasn't too sure of what the instructor was asking for. I searched on the web for possible  
// answers and realized that interpretations of the question were different.
// I have opted to answer the question based on my interpretation.

//Skip all evens as possible primes and divisors

// Skip all evens. Additionally, because 3, 5, 7 and 11


#include <stdio.h>

int main (void)
{
	int 	p, d; //p = prime, and d = divisor
	_Bool	isPrime;

	//Don't check even numbers as possible primes.

	for( p = 2;  p % 2 != 0; ++p ) {
		isPrime = 1;

		for ( d = 2; d < p; ++d )
			if ( p % d == 0 )
				isPrime = 0;

			if ( isPrime != 0 )
				printf("%i ", p );
	}

	printf("\n");
	return 0;
}

