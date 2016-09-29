// Exercise 14A from Chapter 8 of Programming in C, 3rd Edition
// File 8ex14a.c

// Program to return the result of the sum of elements using a function and global variables



#include <stdio.h>

int numberOfElements, i, result = 0;

int arraySum(int integerArray[ ]);


int main(void)
{
	
	printf("How many elements are in the array?\n");		//ask for number of elements in the array
	scanf("%i", &numberOfElements);							//save that in the variable 'numberOfElements'

	int integerArray[numberOfElements];						//declare array with numberOfElements
	printf("What are the array elements?\n");				//ask for the elements of the integer array

	for(i = 0; i < numberOfElements; ++i){					//save elements in a loop
		scanf("%i", &integerArray[i]);
	}

	result = arraySum(integerArray);									//call the arraySum function

	printf("The sum of the elements of the array is %i\n", result);

	return 0;
}

int arraySum(int integerArray[ ])
{

	
	for(i = 0; i < numberOfElements; ++i)					//loop through every element of the array
		result += integerArray[i];							//add each element to result until all elements are added
	
	return result; 											//return the result

}



