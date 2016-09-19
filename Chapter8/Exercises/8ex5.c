// Exercise 5 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex5.c

/* Function to calculate the absolute value of a number	*/
/* I didn't solve this one on my own. I couldn't figure out the instructions 
   I found help here: goo.gl/datkXF */

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

    
   //the program should compare the ratio of the two values to 1. 
    // I miss how the line below is a representation of the given instructions.
    while ( absoluteValue ((guess * guess) / x - 1.0 )>= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
    }

    return guess;

}

int main (void)
{
    printf("squareRoot (2.0) = %f\n", squareRoot (2.0));
    printf("squareRoot (144.0 = %f\n", squareRoot (144.0));
    printf("squareRoot (17.5) = %f\n", squareRoot (17.5));

    return 0;
}