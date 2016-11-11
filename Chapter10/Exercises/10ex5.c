// Exercise 5 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex5.c

// Program to determine if one character string exists inside another string.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char location[20];
bool characterEquality;
int i = 0;											//counter for character string 1

int main(void)
{
	/*bool*/ int stillFound;

	int findString (const char s1[], const char s2[]);

	//do 
	//{
		stillFound = findString("thewrong son", " ");
			//if(characterEquality == true)
				printf("%d\n", stillFound);
	//}
	//while ( stillFound == true );

	


/*
	else
		printf("%d\n", -1);

		*/

	return 0;

}

int findString (const char source[], const char s1[])
{
	//start with the first character of s1. Is it equal to the fitst character of s2
	 
	int h = 0;											//counter for character string 2
	int s1len = strlen(s1); 							//string length of string 2
	int c, holder = 0;
	char temp[20];

	while(source[i] != '\0' && s1[h] != '\0')
	{
		if( source[i] == s1[h] )
		{
			characterEquality = true;
			//save characters of length n = strlen(s2) in temp array
			holder = i;

			for(int c = 0; c < s1len; c++, holder++)
				temp[c] = source[holder];

			for(c = 0, h = 0; temp[c] != '\0' && characterEquality && s1[h] != '\0'; c++, h++)
			{
				if (temp[c] == s1[h])
					{
						characterEquality = true;
						//save s1[p] to an array that contains all the location in the source string where the string was found.
					}

				else if (temp[c] != s1[h])
					characterEquality = false;

			}
		}

		else
		{
			characterEquality = false;
			
		}

		i++;
	}

	if(characterEquality == true)
		return i - 1; 	//So as to show the true value of i, it is needed to reduce i by one 
						//to rectify the increment of i in the while loop in the findString function

	else
		return -1;		
	
}




