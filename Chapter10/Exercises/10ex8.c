// Exercise 8 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex8.c

// Program to insert a string a specified portion of a character string. 
// In the string "the wrong son", this program will replace 'son' with 'one'

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char result[20];
/*Global placeholders: i is InsertionIndex, the starting position inside the source string where "son" was found. 
 a is the placeholder needed to cycle through the result array in the removeString and insertString fuctions */ 
int i, a, n;													
bool characterEquality = true;														
const char source[] = { "an off-campus party" };

int main()
{
	//Declarations
	bool replaceString(const char source[], const char s1[], const char s2[]);
	//bool stillFound;
	int p;

	replaceString(source, "off", "on");
	

	//Print the new string
	for(p = 0; result[p] != '\0'; p++)
		printf("%c", result[p]);

	printf("\n");
	
	
}

bool replaceString(const char source[], const char s1[], const char s2[])
{
	
	//Declarations
	bool findString (const char source[], const char s1[]);
	void removeString( const char source[], int startingIndex, int charactersToRemove );
	void insertString(const char source[], const char s2[], int InsertionIndex);
	int s1len = strlen(s1); 														//the number of characters of s1 
																				//and which need to be removed from source
	//locate s1 inside source
	findString(source, s1);

	if(characterEquality)
	{
		//remove s1 from source
		removeString(source, i, s1len);

		int InsertionIndex = i;													//the point at which insertion should begin					

		//insert s2 into source
		insertString(source, s2, InsertionIndex );

	}

	return characterEquality;



}


bool findString (const char source[], const char s1[])
{

	int x, j, count, s1len = strlen(s1); 	//strlen factors in the null zero in calculating the length of the string
	i = 0;								//As such a string like "eat" would return a length of 3
	j = 0;
	char temp1[20];
	char temp2[20];

	for (i = 0; source[i] != '\0' && s1[j] != '\0'; i++)
	{
		if(source[i] == s1[j])
		{
			characterEquality = true;

			int holder = i; 										//a holder for the existing value of i, which leaves i unchanged
			//for(hol)
			for(x = 0; x < s1len ; x++, holder++)					//saves the next x number of characters into a temp array
				temp1[x] = source[holder];
				//save a null zero in the last character of the temp

			while( characterEquality && s1[j] != '\0' ) //Note: I ran into Bus 10 errors because I lacked s1[j] != '\0'
			{
				for(x = 0; x < s1len; x++, j++ )
				{
					if(temp1[x] == s1[j])   						//compares the characters saved in the temp aray against the characters of string 2
					{												//if the same, the character is saved in the 2nd temp string
						//temp2[j] = temp1[x];
						characterEquality = true;
					}					

					else
					{
						//Resets the result array to null values if all characters are not similar.
						for(count = 0; count < j; count++)
						temp2[count] = '\0';
						j = 0;
						characterEquality = false;

					}
				}

				
			}
		}
	}

	temp2[s1len] = '\0';

	i = i - 1;

	return characterEquality;													
		
}


void removeString( const char source[], int startingIndex, int charactersToRemove )
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
void insertString(const char source[], const char s2[], int InsertionIndex)
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

}
