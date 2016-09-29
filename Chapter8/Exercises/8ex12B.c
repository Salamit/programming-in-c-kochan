// Exercise 12B from Chapter 8 of Programming in C, 3rd Edition
// File 8ex12B.c

// A program to transpose a matrix m[i][j] to another matrix n[j][i] using 
// a variable length array

// I spent a couple of days on this :'( But I learned my lesson. When you send a matrix to a function
// send the matrix as follows: transposeMatrix ( nRows1, nCols1, matrix1); 
// Not like this transposeMatrix ( nRows1, nCols1, matrix1[nRows1][nCols1])

#include <stdio.h>

void transposeMatrix (int nRows1, int nCols1, 
					 int matrix1[nRows1][nCols1],
					 int nRows2, int nCols2, 
				 	 int matrix2 [nRows2][nCols2]);

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols]);

int main(void)
{
	int row, column;

	int nRows1, nCols1, nRows2, nCols2;

	printf("How many rows are in arrayM?\n");
	scanf("%i", &nRows1);

	printf("How many columns are in arrayM?\n");
	scanf("%i", &nCols1); 

	
	nRows2 = nCols1;

	nCols2 = nRows1;

	int matrix1[nRows1][nCols1];     
	     

	
	//ask for elements in arrayM
	for(row = 0; row < nRows1; row++)
	{
		for(column = 0; column < nCols1; column++)
		{
			printf("What is value in row %i, column %i in arrayM?\n", row + 1, column + 1);
			scanf("%i", &matrix1[row][column]);										
		}
	}

	int matrix2[nRows2][nCols2];

	printf("Original matrix is: \n");
	displayMatrix(nRows1, nCols1, matrix1);



	//calling and sending the multidimensional array to transposeMatrix

	transposeMatrix ( nRows1, nCols1, matrix1, nRows2, nCols2, matrix2 );


	printf("Transposed matrix is:\n");
	displayMatrix(nRows2, nCols2, matrix2);
	
	return 0;


}


void transposeMatrix (int nRows1, int nCols1, 
					 int matrix1[nRows1][nCols1],
					 int nRows2, int nCols2, 
				 	 int matrix2 [nRows2][nCols2])
{

	int row, column;


	for(row = 0; row < nRows1; ++row)  
	{
		for(column = 0; column < nCols1; ++column)
			matrix2[column][row] = matrix1[row][column];
	}		
	
}

void displayMatrix (int nRows, int nCols, int matrix[nRows][nCols])
{	
	int row, column;

	for ( row = 0; row < nRows; ++row) {     
		for ( column = 0; column < nCols; ++column ) 
			printf ("%5i", matrix[row][column]);
		printf ("\n");
	}
}