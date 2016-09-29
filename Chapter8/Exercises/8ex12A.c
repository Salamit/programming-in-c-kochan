// Exercise 12 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex12A.c

// A program to transpose a matrix m[i][j] to another matrix n[j][i]


#include <stdio.h>

void transposeMatrix(int arrayM[4][5], int arrayN[5][4]);


int main()
{
	int i, j, arrayN[5][4];

	 
	int arrayM[4][5] =
	{
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
	};	


	transposeMatrix(arrayM, arrayN);

	for(j = 0; j < 5; ++j)
	{
		printf("\n");
		for(i = 0; i < 4; ++i)
			printf("%i ", arrayN[j][i]);
	}

	printf("\n");

	return 0;


}

void transposeMatrix(int arrayM[4][5], int arrayN[5][4])		//arrayM[i][j], arrayN[j][i]
{
	int i, j;

	for(j = 0; j < 5; ++j)
	{
		for(i = 0; i < 4; ++i)
			arrayN[j][i] = arrayM[i][j];
	}



}
