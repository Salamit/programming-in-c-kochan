// Exercise 9 from Chapter 5 of Programming in C, 3rd Edition
// File 5ex9.5.2.c

/* Program to caluculate the 200th triangular number
   using a while statement					*/

#include <stdio.h>

int main (void)
{

	int n, triangularNumber;

	triangularNumber = 0;

	n = 1;
	while (n <= 200){
		triangularNumber = triangularNumber + n;
		n = n + 1;
	}
		

	printf("The 200th triangular mumber is %i\n", triangularNumber);

	return 0;
	
}
