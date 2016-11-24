// Exercise 14 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex14.c

//Function to convert an integer value into a character string

#include <stdio.h>
#include <string.h>

void intToStr(int n)
{
	char array[20], array2[20];
	int intValue, index = 0;
	int i, x, y;

	/*
	int index = 0;

	if (array[0] == 45)
		index = 1;

	for (int i = index; i <= 4; i++)
		array[i] += 0;

	*/
	if (n < 0)
	{
		index = 1;
		array2[0] = '-';
		n *= -1;
	}

	for(i = 0; n != 0; i++ )
	{
		intValue = n % 10;
		n /= 10;
		array[i] = intValue + '0';
		//printf("%c", array[i]);

	}

	x = strlen(array);
	

	for(i = x - 1, y = index; i >= 0; i--, y++ )
	{
		array2[y] = array[i];
		
	}

	printf("%s", array2);

	printf("\n");


}

int main(void)
{

	intToStr(321);
	intToStr(-321);

	/*
	void intToStr(int array[]);

	int array[] = {45, 49, 50, 51};

	intToStr(array);

	for (int i = 0; i <= 4; i++)
		printf("%c", array[i]);

	printf("\n");
	*/


	return 0;
}