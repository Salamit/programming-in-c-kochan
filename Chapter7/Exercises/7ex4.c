// Exercise 4 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex4.c

// Program to calculate the average of an array of 10 floating-point values

#include <stdio.h>

int main (void)
{
	
	float averageCalculatingArray[9], value, average;
	int i, sumOfValues = 0;

	//Initialize array
	for( i = 0; i < 10; ++i )
		averageCalculatingArray[i] = 0;

	sumOfValues = 0; //initializes sum of values

	//Get values from user
	for( i = 0; i < 10; ++i ){

		printf("Enter value %i:\n", i + 1);
		scanf("%f", &value );
		

		//The line below is bad code. Without using isdigit(), I couldn't come up
		//with a different solution. Kindly let me know if you know otherwise.
		if ( value >= 0 && value <= 999999999 ){
			//save values to array
			averageCalculatingArray[i] = value;

			// add value to sum of values
			sumOfValues += value;
		}

		else
			printf("Bad response %f\n", value);

	}


	//calculate average
	average = (float)sumOfValues/10;

	//Show average
	printf("The average is %f\n", average);

	return 0;
}
