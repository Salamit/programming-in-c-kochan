// Exercise 8 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex8.c

/* Program to find the roots of a quadratic equation*/



#include <stdio.h>

float absoluteValue (float x);
float squareRoot (float x);


float absoluteValue (float x)
{
	if ( x < 0 )
		x =-x;
	return (x);
}

// Function to compute the square root of a number

float squareRoot (float x)
{
	const float epsilon = .00001; // The value of epsilon is used to determine when to end the iteration process
    // Set the value of guess to 1.
    float       guess   = 1.0;

    
   //the program should compare the ratio of the two values to 1. 
    // I miss how the line below is a representation of the given instructions.
    while ( absoluteValue ((guess * guess) / x - 1.0 )>= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;

}

int main(void)
{
	int discriminant, a, b, c;
	float x1, x2;

	//enter values for a, b, and c.

	printf("What is the value of 'a'?\n" );
	scanf ("%i", &a);

	printf("What is the value of 'b'?\n" );
	scanf ("%i", &b);

	printf("What is the value of 'c'?\n" );
	scanf ("%i", &c);

	//calculate discriminant;

	discriminant = (b * b) - (4 * a * c);

	//if discriminant < 0;

	if (discriminant < 0)
	{
		printf("Sorry bud, the roots are imaginary\n");  				// print that roots are imaginary
	}

	// else calculate the two roots of the equation using the quadratic formula

	else
	{
		x1 = (-b + squareRoot(discriminant))/(2 * a);

		x2 = (-b - squareRoot(discriminant))/(2 * a);

		// display the results
		printf("The roots of the equation are %f and %f\n", x1, x2 );

	}

	

	return 0;

}