// Exercise 4 from Chapter 9 of Programming in C, 3rd Edition
// File 9ex4.c

// Program to modifies the program in file 9ex2.c such that it computes the day 
// of the week on which a particular day falls.

#include <stdio.h>

#define 	SUBTRAHEND 		621049 

//Define struct

struct dates{
	int day;
	int month;
	int year;

} dates[1]; //Define array of structure with each element being a structure
//Each contains the members day, month and year. 

struct dayOfWeek{

	char day[9];

}const daysOfWeek[7];

const struct dayOfWeek daysOfWeek[7] =
{
	{"Sunday"}, {"Monday"}, {"Tuesday"}, 
	{"Wednesday"}, {"Thursday"}, {"Friday"},
	{"Saturday"}
};


int main()
{
	int i, result;
	int calculateN(struct dates d);
	int holder[1];
	//int N1, N2;

	//accept input 1 and input 2

	for ( i = 0; i < 1; ++i )
	{
		printf("Enter the first date in the format dd:mm:yyyy: ");
		scanf("%i:%i:%i", &dates[i].day, &dates[i].month, &dates[i].year );

		holder[i] = calculateN(dates[i]);

	}

	result = holder[0] - SUBTRAHEND;
	result %= 7;

	//N1 =  calculateN(dates[0]);
	//N2 =  calculateN(dates[1]);

	printf("\n");

	printf("The day of the week is = %s\n", daysOfWeek[result].day);

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

