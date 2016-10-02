//NOT COMPLETED!
//NOT COMPLETED!

// Exercise 7A from Chapter 6 of Programming in C, 3rd Edition
// File 6ex7A.c

#include <stdio.h>

int main()
{
	int p = 0;
	_Bool	isPrime;

	printf("What is your number?\n");
	scanf("%i ", &p);



	do 
	{
		if ( p % 2 != 0 )
			isPrime = 1;

		else
			isPrime = 0;


	} while (p <= 50);

	printf("%i\n", isPrime);
}
