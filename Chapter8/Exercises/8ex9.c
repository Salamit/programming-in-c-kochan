// Exercise 9 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex9.c

/* Program to find the least common multiple */

#include <stdio.h>

int lcm (int u, int v);
int gcd (int u, int v);

int lcm (int u, int v)
{
	int result;

	result = (u * v)/gcd(u, v);

	return result;
}



int gcd (int u, int v)
{
	int temp;

	while ( v != 0 ) {
		temp = u % v;
		u = v;
		v = temp;
	}

	return u;
}

int main(void)
{
	int u, v, result;

	printf("\nEnter 2 numbers whose least common multiple you wish to find\n\n");
	

	do
	{
		printf("Number 1 is?\n");
		scanf ("%i", &u);

	} while (u < 0);

	do
	{
		printf("Number 2 is?\n");
		scanf ("%i", &v);

	} while (u < 0);

	result = lcm( u, v);

	printf("The least common multiple of %i and %i is %i\n", u, v, result);

	return 0;


}