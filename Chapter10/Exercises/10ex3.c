// Exercise 3 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex3.c

// Program is a rework of 10eg7.c
// A word with an apostrophe is counted as one word.

#include <stdio.h>
#include <stdbool.h>

bool alphabetic (const char c)
{
	if ( (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') )
		return true;
	else
		return false;
}

/* Function to count the number of words in a string */

int countWords (const char string [])
{
	int i, wordCount = 0;
	bool lookingForWord = true, alphabetic (const char c);

	for ( i = 0; string[i] != '\0'; ++i )
		if ( alphabetic(string[i]) || string[i] == '\'' )
		{
			if ( lookingForWord )
			{
				++wordCount;
				lookingForWord = false;
			}
		}
		else
			lookingForWord = true;

		return wordCount;
}


int main (void)
{
	const char text1[] = "Well, here goes. ";
	const char text2[] = "Well, that's it. ";
	int countWords (const char string[]);

	printf("%s - words = %i\n", text1, countWords (text1));
	printf("%s - words = %i\n", text2, countWords (text2));

	return 0;
}
