// Exercise 6 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex6.c

// Program to remove a specified portion of a character string.

#include <stdio.h>

char result[20];

int main()
{
	void removeString( const char source[], int startingIndex, int charactersToRemove );
	int j;

	removeString ("the wrong son", 4, 6);

	for(j = 0; result[j] != '\0'; j++)
		printf("%c", result[j]);

	printf("\n");
}

void removeString( const char source[], int startingIndex, int charactersToRemove )
{
	int i, j;
	int n = startingIndex + charactersToRemove;		 						//the next character to start from after removal

	//save every character from source string until you hit the starting index

	for (i = 0, j = 0; i < startingIndex; i++, j++ )
	{
		result[j] = source[i];
	}


	//start at the second starting point 

	for (i = n; source[i] != '\0'; i++, j++)
	{
		result[j] = source[i];												//save all the characters up to null zero in result
	}

	result[j] = '\0';



}




