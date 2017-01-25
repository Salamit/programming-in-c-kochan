// Exercise 3 from Chapter 9 of Programming in C, 3rd Edition
// File 9ex3.c

// Program that takes as its arguments two time structures and 
// returns a time structure that represents the elapsed time
// (in hours, minutes, and seconds) between the two times.

#include <stdio.h>

struct time{
	
	int hours;
	int minutes;
	int seconds;

}result, times[2], elapsed_time(struct time time1, struct time time2);

int main()
{
	int i;
	//struct time elapsed_time(struct time time1, struct time time2);

	for ( i = 0; i < 2; ++i )
	{
		printf("Enter the time %i in the format hh:mm:ss: ", i+1 );
		scanf("%i:%i:%i", &times[i].hours, &times[i].minutes, &times[i].seconds);

	}

	result = elapsed_time(times[0], times[1]);

	printf("The time difference is %.2i hour(s) %.2i minute(s) and %.2i second(s)\n", result.hours, result.minutes, result.seconds);

}

struct time elapsed_time(struct time time1, struct time time2)
{
	//time2.hours - time1.hours;
	//time2.minutes - time1.minutes;
	//time2.seconds - time1.seconds;
	result = (struct time) { time2.hours - time1.hours, time2.minutes - time1.minutes, time2.seconds - time1.seconds };

	if(result.hours < 0)
		result.hours *= -1;

	if(result.minutes < 0)
		result.minutes *= -1;

	if(result.seconds < 0)
		result.seconds *= -1;



	return result;


}


