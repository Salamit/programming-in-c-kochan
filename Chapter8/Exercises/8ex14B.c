// Exercise 14B from Chapter 8 of Programming in C, 3rd Edition
// File 8ex14B.c

// A program to transpose a matrix m[i][j] to another matrix n[j][i]
// This program is a rewrite of 8ex12A.c so it uses global variables instead of arguments


#include <stdio.h>

int i, j, arrayN[5][4];

	 
int arrayM[4][5] =
	{
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
		{ 1, 2, 3, 4, 5, },
	};	



void transposeMatrix(void);



int main()
{



	transposeMatrix();

	for(j = 0; j < 5; ++j)
	{
		printf("\n");
		for(i = 0; i < 4; ++i)
			printf("%i ", arrayN[j][i]);
	}

	printf("\n");

	return 0;


}

void transposeMatrix(void)		
{
	int i, j;

	for(i = 0; i < 4; ++i)
	{
		for(j = 0; j < 5; ++j)
			arrayN[j][i] = arrayM[i][j];
	}



}