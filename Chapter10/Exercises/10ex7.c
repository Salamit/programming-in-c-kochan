// Exercise  from Chapter 10 of Programming in C, 3rd Edition
// File 10ex7.c

// Program to insert a string a specified portion of a character string.

#include <stdio.h>

char result[20];

int main()
{
	int i;
	void insertString(const char str1[], const char str2[], int InsertionIndex);

	insertString("the wrong son", "per", 10);
	
	for(i = 0; result[i] != '\0'; i++)
		printf("%c", result[i]);

	printf("\n");
}

void insertString(const char str1[], const char str2[], int InsertionIndex)
{
	int i, j, k;

	for(i = 0, j = 0 ; i < InsertionIndex; i++, j++)
	{
		result[j] = str1[i];
	}

	for(k = 0; str2[k] != '\0'; k++, j++)
	{
		result[j] = str2[k];
	}

	for( ; str1[i] != '\0'; i++, j++)
	{
		result[j] = str1[i];
	}

}
