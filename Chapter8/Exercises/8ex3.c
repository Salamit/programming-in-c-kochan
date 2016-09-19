// Exercise 3 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex3.c

/* Function to calculate the absolute value of a number	*/

#include <stdio.h>

float absoluteValue (float x);
float squareRoot (float x, float y);

float absoluteValue (float x)
{
	if ( x < 0 )
		x =-x;
	return (x);
}

// Function to compute the square root of a number

float squareRoot (float x, float y)
{
	const float epsilon = y; // The value of epsilon is used to determine when to end the iteration process
    // Set the value of guess to 1.
    float       guess   = 1.0;

    while ( absoluteValue (guess * guess - x) >= epsilon ){
        guess = ( x / guess + guess ) / 2.0;
        
    }
        

    return guess;

}

int main (void)
{

    float epsilon, number;

    printf("What number would you like to find the square root of?\n");
    scanf ("%f", &number);
    printf("What is the epsilon value?\n");
    scanf ("%f", &epsilon);



    printf("squareRoot %f = %f\n", number, squareRoot (number, epsilon));


    return 0;
}