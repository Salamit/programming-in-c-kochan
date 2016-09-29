// Exercise 15 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex15.c

// Program to convert a positive integer to another base
/* Took me days but I am proud of this. What I learned:

1. Seperating getNumber from getBase allowed for more flexibility
2. Step 1 allowed the creation of an 'on' and 'off' switch for the loop such that 
	if 0 is inputted by the user, the loop to request a number ends. 

*/

#include <stdio.h>

int        convertedNumber[64];
long int   numberToConvert;
int        base;
int        digit = 0;


void getNumber (void)
{	
	printf("Number to be converted? ");
	scanf ("%li", &numberToConvert);

}

void getBase (void)
{

		do {
			printf("Base? \n");
			scanf ("%i", &base);

			if ( base < 2 || base > 16 ) 
			{
				printf("Bad base - must be between 2 and 16\n");
			}
		}
		while( base < 2 || base > 16 );


} 

void convertNumber (void)
{
	do {

		convertedNumber[digit] = numberToConvert % base;
		++digit;
		numberToConvert /= base;
	}
	while ( numberToConvert != 0);
}

void displayConvertedNumber (void)
{
	const char baseDigits[16] =
			{ '0', '1', '2', '3', '4', '5', '6', '7',
			'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	int nextDigit;

	printf("Converted number = ");

	for (--digit; digit >= 0; --digit ) {
		nextDigit = convertedNumber[digit];
		printf("%c", baseDigits[nextDigit]);
	}

	printf("\n");
}

int main (void)
{
	void getNumber (void), getBase (void), convertNumber (void),
		displayConvertedNumber (void);

		int terminate = 0; //the game changer. 

		do
		{
			getNumber ();

			if(numberToConvert != 0)
			{
				getBase ();

				convertNumber ();

				displayConvertedNumber ();
			}

			else
			{
				printf("You just killed the program :'(\n");
				terminate = 1;
			}

		}
		while(terminate == 0);
			

	return 0;
}