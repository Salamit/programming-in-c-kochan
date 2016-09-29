// Exercise 14D from Chapter 8 of Programming in C, 3rd Edition
// File 8ex14D.c

// Program to sort an array of integers into ascending or descending order

#include <stdio.h>

char order;
	int i;
	int a[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17, 22, 6, 11 };

int i, j, temp, n = 16;


void sort (void);


int main (void)
{
	


	printf("To sort in ascending order input 'a'\n");
	printf("To sort in descending order input 'd'\n");
	scanf("%c", &order);


	printf("The array before the sort:\n");

	for ( i = 0; i < n; ++i )
		printf("%5i ", a[i]);

	sort ();

	printf("\n\nThe array after the sort:\n");

	for ( i = 0; i < n; ++i )
		printf("%5i ", a[i]);

	printf("\n");

	return 0;
}

void sort (void)
{
	

	if(order == 'a')
	{
		for ( i = 0; i < n - 1; ++i )
			for ( j = i + 1; j < n; ++j )
				if ( a[i] > a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}

	if(order == 'd')
	{
		for ( i = 0; i < n - 1; ++i )
			for ( j = i + 1; j < n; ++j )
				if ( a[i] < a[j] ) {
					temp = a[i];
					a[i] = a[j];
					a[j] = temp;
				}
	}


}