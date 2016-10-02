// Exercise 6 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex6.c

// Program takes an integer keyed in from the terminal 
// and displays each digit in English





#include <stdio.h>

int main()
{
	int c, nc;

	// Get the integer, get each integer as a character using getchar()
	// (c = getchar()) != '\n') is technique derived from 'The C Programming Language' - Page 17 to 18
	// Info on book at ttp://goo.gl/dcrn1Y

	for (nc = 0; (c = getchar()) != '\n' ; ++nc) 
		{
			while ( nc >= 0 )

			{
				switch (c)
				{

					case '0':
					printf("Zero ");
					nc--;
					break;

					case '1':
					printf("One ");
					nc--;
					break;

					case '2':
					printf("Two ");
					nc--;
					break;

					case '3':
					printf("Three ");
					nc--;
					break;

					case '4':
					printf("Four ");
					nc--;
					break;

					case '5':
					printf("Five ");
					nc--;
					break;

					case '6':
					printf("Six ");
					nc--;
					break;

					case '7':
					printf("Seven ");
					nc--;
					break;

					case '8':
					printf("Eight ");
					nc--;
					break;

					case '9':
					printf("Nine ");
					nc--;
					break;
				}
			}
		}
	
	printf("\n");

	
		
	return 0;
}
