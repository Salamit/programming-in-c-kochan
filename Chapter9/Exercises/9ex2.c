// Exercise 2 from Chapter 9 of Programming in C, 3rd Edition
// File 9ex2.c

// Program that permits the user to type two dates and then calculates
// the number of elapsed days between the two dates

#include <stdio.h>

//Define struct

struct dates{
	int day;
	int month;
	int year;

} dates[2]; //Define array of structure with each element being a structure
//Each contains the members day, month and year. 

int main()
{
	int i, numberOfElapsedDays;
	int calculateN(struct dates d);
	int holder[2];
	//int N1, N2;

	//accept input 1 and input 2

	for ( i = 0; i < 2; ++i )
	{
		printf("Enter the first date in the format dd:mm:yyyy: ");
		scanf("%i:%i:%i", &dates[i].day, &dates[i].month, &dates[i].year );

		holder[i] = calculateN(dates[i]);

	}

	numberOfElapsedDays = holder[1] - holder[0];

	//N1 =  calculateN(dates[0]);
	//N2 =  calculateN(dates[1]);

	printf("\n");

	printf("Number of elapsed days = %i\n", numberOfElapsedDays);

	printf("\n");

}

int calculateN(struct dates d)
{

	int f, g, N;

	if(d.month <= 2)
	{
		f = d.year - 1;
		g = d.month + 13;
	}

	else
	{
		f = d.year;
		g = d.month + 1;
	}

	N = 1461 * f/4 + 153 * g/5 + d.day; 

	return N;
}





