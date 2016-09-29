// Exercise 13 from Chapter 8 of Programming in C, 3rd Edition
// File 8ex13.c

// Program to sort an array of integers into ascending or descending order

#include <stdio.h>


void sort (int a[], int n, char order);


int main (void)
{
	char order;
	int i;
	int array[16] = { 34, -5, 6, 0, 12, 100, 56, 22,
					  44, -3, -9, 12, 17, 22, 6, 11 };


	printf("To sort in ascending order input 'a'\n");
	printf("To sort in descending order input 'd'\n");
	scanf("%c", &order);


	printf("The array before the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf("%5i ", array[i]);

	sort (array, 16, order);

	printf("\n\nThe array after the sort:\n");

	for ( i = 0; i < 16; ++i )
		printf("%5i ", array[i]);

	printf("\n");

	return 0;
}

void sort (int a[], int n, char order)
{
	int i, j, temp;

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