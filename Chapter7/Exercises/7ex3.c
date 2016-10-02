// Exercise 3 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex3.c

// Program demonstrating an array of counters

#include <stdio.h>

int main (void)
{
	int ratingCounters[11], i, response;

	for (i = 1; i <= 10; ++i) 										//initializes array
		ratingCounters[i] = 0;
	

	printf("\nThis program accepts and counts responses entered\n");
	printf("between 1 and 10.\n\n");
	printf("Enter '999' to indicate that the last response\n");
	printf("has been entered and to exit the program.\n\n");
	printf("Begin entering your responses\n");


	for ( i = 1; ; ++i ) {
		scanf("%i", &response);

		if ( response == 999 )
			break;

		else if ( response < 1 || response > 10 )
			printf("Bad response: %i\n", response);

		else
			++ratingCounters[response];
	}
		
	
	printf("\n\n Rating   Number of Responses\n");
	printf("_______ ___________________\n");

	for ( i = 1; i <= 10; ++i )
		printf("%4i%14i\n", i, ratingCounters[i]);

	return 0;
}
