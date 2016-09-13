// Example 8 from Chapter 8 of Programming in C, 3rd Edition
// File 8eg8.c

/* Function to calculate the absolute value of a number	*/

#include <stdio.h>

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

    while ( absoluteValue (guess * guess - x) >= epsilon )
        guess = ( x / guess + guess ) / 2.0;

    return guess;

}

int main (void)
{
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf("squareRoot (144.0 = %f\n", squareRoot (144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}