// Exercise 13 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex13.c

// Program to convert the lowercase characters in a string to their uppercase. 

#include <stdio.h>

void lowercaseToUppercase(char string[])
{ 
	//go through every character in the string
	for (int c = 0; string[c] != '\0'; c++)
	{
		//if it is a lowercase, convert it 
		if (string[c] >= 'a' && string[c] <= 'z')
		{
			string[c] += ('A' - 'a');
		}


	}



}

int main(void)
{
	void lowercaseToUppercase(char string[]);

	char string[] = { "wait a minute baby" };

	lowercaseToUppercase(string);

	printf("%s\n", string);

	return 0;

}

