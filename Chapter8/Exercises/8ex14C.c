// Exercise 12B from Chapter 8 of Programming in C, 3rd Edition
// File 8ex14c.c

// A program to transpose a matrix m[i][j] to another matrix n[j][i] using 
// a global variables

//A global multidimentional array of variable length isn't possible. Being that this is the case, I don't know how to 
//fufil the requirements of the program. I have resigned myself to using a global array of definite length. 
//I have spent days on this and have given up for now. :'(


#include <stdio.h>

int row, column, matrix2[5][4];

int nRows1 = 0; 
int nCols1 = 0; 
int nRows2 = 0; 
int nCols2 = 0;

int matrix1[4][5] = 
{
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
	};	


void transposeMatrix (void);

void displayMatrix1 (void);
void displayMatrix2 (void);

int main(void)
{


	printf("Original matrix is: \n");
	displayMatrix1();


	transposeMatrix ();


	printf("Transposed matrix is:\n");
	displayMatrix2();
	
	return 0;


}


void transposeMatrix (void)
{


	for(row = 0; row < 4; ++row)  
	{
		for(column = 0; column < 5; ++column)
			matrix2[column][row] = matrix1[row][column];
	}		
	
}

void displayMatrix1 (void)
{	

	for ( row = 0; row < 4; ++row) {     
		for ( column = 0; column < 5; ++column ) 
			printf ("%5i", matrix1[row][column]);
		printf ("\n");
	}
}

void displayMatrix2 (void)
{	

	for ( row = 0; row < 5; ++row) {     
		for ( column = 0; column < 4; ++column ) 
			printf ("%5i", matrix2[row][column]);
		printf ("\n");
	}
}