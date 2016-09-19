// Exercise 2 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex2B.c

// Program asks for user input 5 times 
// and each time uses the input 
// to generate a table of triangular numbers

#include <stdio.h>

//declaration
int calculateTriangularNumber (int number); 

//definition
int calculateTriangularNumber (int number)
{

int n, triangularNumber = 0; 

	for ( n = 1; n <= number; ++n )
		triangularNumber += n;


	return triangularNumber;
	
}



int main(void)
{
	int number1, number2, number3, number4, number5, triangularNumber;

	
	printf("What five triangular numbers do you want? ");
	scanf ("%i %i %i %i %i", &number1, &number2, &number3, &number4, &number5 );
	
	//calculate and print the value of the first triangular number
	triangularNumber = calculateTriangularNumber (number1); 
	printf("Triangular number %i is %i\n\n", number1, triangularNumber);
	
	//calculate and print the value of the second triangular number
	triangularNumber = calculateTriangularNumber (number2); 
	printf("Triangular number %i is %i\n\n", number2, triangularNumber);

	//calculate and print the value of the first triangular number
	triangularNumber = calculateTriangularNumber (number3); 
	printf("Triangular number %i is %i\n\n", number3, triangularNumber);

	//calculate and print the value of the first triangular number
	triangularNumber = calculateTriangularNumber (number4); 
	printf("Triangular number %i is %i\n\n", number4, triangularNumber);

	//calculate and print the value of the first triangular number
	triangularNumber = calculateTriangularNumber (number5); 
	printf("Triangular number %i is %i\n\n", number5, triangularNumber);

	return 0;
}