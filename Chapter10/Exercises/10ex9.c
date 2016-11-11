// Exercise 9 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex9.c

// This, Ladies and Gentlemen, was a long tough exercise.
// Program to insert a string a specified portion of a character string. 
// In the string "the wrong son", this program will replace 'son' with 'one'

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char result[20];
/*Global placeholders: i is InsertionIndex, the starting position inside the source string where "son" was found. 
 a is the placeholder needed to cycle through the result array in the removeString and insertString fuctions */ 
int a, n;													
bool characterEquality = true;														
char source[] = { "Everyone is having babies" }; //Try these as well: "A nu start", "Pen is broken. Please use finger"

int main()
{
	//Declarations
	bool replaceString(char source[], const char s1[], const char s2[]);
	bool stillFound;
	int p, i = 0;

	do
	{
		stillFound = replaceString(source, " ", "");
		if (stillFound == true) 
			{
				i++;
			}
	}
	while (stillFound == true);

	
	if( i > 1 ) //Print the new string
	{
		for(p = 0; result[p] != '\0'; p++)
			printf("%c", result[p]);

		printf("\n");
	}

	else
	{
		printf("The string was not found\n");
	}
	

	
	
	
}

bool replaceString(char source[], const char s1[], const char s2[])
{
	int c; 														//necessary as a holder for the value of i - 1 because 'i' was incremented
																//at the end of the findString function and the correct value of i should be
																//i - 1
	//Declarations
	int findString (char source[], const char s1[]);
	void removeString(char source[], int startingIndex, int charactersToRemove );
	void insertString(char source[], const char s2[], int InsertionIndex);
	int s1len = strlen(s1); 														//the number of characters of s1 
																				//and which need to be removed from source
	//locate s1 inside source
	c = findString(source, s1);
	

	if(characterEquality == true)
	{
		int startingIndex = c;
		//remove s1 from source
		removeString(source, startingIndex, s1len);

		int InsertionIndex = c;													//the point at which insertion should begin					

		//insert s2 into source
		insertString(source, s2, InsertionIndex );

	}

	return characterEquality;

}

int findString (char source[], const char s1[])
{
	//start with the first character of s1. Is it equal to the fitst character of s2
	 
	int i = 0;
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
				{
					characterEquality = false;
					h = -1;											//The for loop enclosing is going to make an increment causing h to go from -1 to 0.
																	//Because, the count variable 'h' needs to reset to 0, having h = -1 accounts for the increment to be made by the for loop. 
					
				}
					

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
		return 0;		
	
}


void removeString(char source[], int startingIndex, int charactersToRemove )
{
	int p;
	n = startingIndex + charactersToRemove;		 						//the next character to start from

	//save every character from source string until you hit the starting index

	for (p = 0, a = 0; p < startingIndex; p++, a++ )
	{
		result[a] = source[p];
	}


	//start at the second starting point. P = n skips the characters to be removed and so starts from
	//the next character after skipping. 

	for (p = n; source[p] != '\0'; p++, a++)
	{
		result[a] = source[p];												//save all the characters up to null zero in result
	}

}



//after the character has been removed
void insertString(char source[], const char s2[], int InsertionIndex)
{
	int p, k;

	for (p = 0, a = 0; p < InsertionIndex; p++, a++ )
	{
		result[a] = source[p];
	}


	for(k = 0; s2[k] != '\0'; k++, a++)
	{
		result[a] = s2[k];
	}


	for( p = n; source[p] != '\0'; p++, a++)
	{
		result[a] = source[p];
	}


	result[a] = '\0';

	//saves the result array to the source array so an altered source string is created based on the changed made. 
	for (p = 0, a = 0; source[p] != '\0' && result[a] != '\0'; p++, a++)
	{
		source[p] = result[a];												//save all the characters up to null zero in result
	}

	source[p] = '\0';

}
