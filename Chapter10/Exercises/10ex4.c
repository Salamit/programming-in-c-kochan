// Exercise 4 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex4.c

// Program to extract a portion of a character string.
// Got stuck with my loop and sought help by evaluating the following github user's code goo.gl/OMVyB1

#include <stdio.h> 

int main(void)
{
	//declare variables and functions
	void substring (const char source[], int start, int count, char result[]);
	char extracted[20];

	//call the function
	substring("character", 4, 3, extracted);

	printf("%s\n", extracted);


	return 0;
}

void substring (const char source[], int start, int count, char result[])
{
	int i, j;


	for ( i = start, j = 0; source[i] != '\0'; ++i, ++j )
	{
		result[j] = source[i];
	}

	result[count] = '\0';

}