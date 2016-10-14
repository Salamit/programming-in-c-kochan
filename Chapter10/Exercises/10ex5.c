// Exercise 5 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex5.c

// Program to extract a portion of a character string.

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char result[20];
int i;
bool characterEquality = true;

int main(void)
{
	void findString (const char str1[], const char str2[]);

	findString ("a chatterbox", "that"); 


	//for (i = 0; result[i] != '\0' ; ++i )
	//	printf("%c", result[i]);

	if(characterEquality)
		printf("%d\n", i - 1);

	else
		printf("%d\n", -1);
	
	return 0;
}

void findString (const char str1[], const char str2[])
{

	int x, j, count, n = strlen(str2); //strlen factors in the null zero in calculating the length of the string
	i = 0;								//As such a string like "eat" would return a length of 3
	j = 0;
	char temp[20];

	for (i = 0; str1[i] != '\0' && str2[j] != '\0'; i++)
	{
		if(str1[i] == str2[j])
		{
			characterEquality = true;

			int holder = i; 										//a holder for the existing value of i, which leaves i unchanged
			for(x = 0; x <= (n - 1); x++, holder++)					//saves the next x characters into a temp array
				temp[x] = str1[holder];
				//save a null zero in the last character of the temp

			while( characterEquality && str2[j] != '\0' ) //Note: I ran into Bus 10 errors because I lacked str2[j] != '\0'
			{
				for(x = 0; x <= (n - 1); x++, j++ )
				{
					if(temp[x] == str2[j])   					//compares the characters saved in the temp aray against the characters of string 2
					{											//if the same, the character is saved in the result string
						result[j] = temp[x];
					}					

					else
					{
						for(count = 0; count < j; count++)
						result[count] = '\0';
						j = 0;
						characterEquality = false;

					}
				}

				result[n] = '\0';
			}
		}
	}

	/*
	while(str1[i] != '\0' || str2[j] != '\0')
	{
		if(str1[i] == str2[j] && areEqual)
		{
			result[j] = str1[i];
			++i;
			++j;
			areEqual = true;

		}

		else
		{
			++i;
			j = 0;
			areEqual = false;

		}


	}
	*/

	
	

}

