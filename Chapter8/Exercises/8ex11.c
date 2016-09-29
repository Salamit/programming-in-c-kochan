// Exercise 11 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex11.c

// Program to return the result of the sum of elements using a function



#include <stdio.h>



int arraySum(int numberOfElements, int integerArray[ ]);



int main(void)
{
	int numberOfElements, i, result = 0;
	
	printf("How many elements are in the array?\n");		//ask for number of elements in the array
	scanf("%i", &numberOfElements);							//save that in the variable 'numberOfElements'

	int integerArray[numberOfElements];						//declare array with numberOfElements
	printf("What are the array elements?\n");				//ask for the elements of the integer array

	for(i = 0; i < numberOfElements; ++i){					//save elements in a loop
		scanf("%i", &integerArray[i]);
	}

	result = arraySum(numberOfElements, integerArray);				//call the arraySum function

	printf("The sum of the elements of the array is %i\n", result);

	return 0;
}

int arraySum(int numberOfElements, int integerArray[ ])
{
	int i, result = 0;

	
	for(i = 0; i < numberOfElements; ++i)					//loop through every element of the array
		result += integerArray[i];							//add each element to result until all elements are added
	
	return result; 											//return the result

}

