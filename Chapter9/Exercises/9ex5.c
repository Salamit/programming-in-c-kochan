// Exercise 5 from Chapter 9 of Programming in C, 3rd Edition
// File 9ex5.c

// Program to update the time b calling another function and that switches
// over to the nextday if the time reaches midnight.

#include <stdio.h>
#include <stdbool.h>

//time structure
struct time
{
	int seconds;
	int minutes;
	int hour;
}current_time;

// date structure
struct date
{
	int day;
	int month;
	int year;
}current_date;

struct dateAndTime
{
	struct time  current_time;
	struct date  current_date;
}currentDateAndTime, updatedDateAndTime, clockKeeper(struct dateAndTime now);

int main()
{

	
	printf("Enter the time (hh:mm:ss): ");
	scanf ("%i:%i:%i", &currentDateAndTime.current_time.hour, 
		&currentDateAndTime.current_time.minutes, &currentDateAndTime.current_time.seconds);

	printf("Enter today's date (mm dd yyyy): ");
		scanf ("%i%i%i", &currentDateAndTime.current_date.month, &currentDateAndTime.current_date.day,
				&currentDateAndTime.current_date.year);


	updatedDateAndTime = clockKeeper (currentDateAndTime);

	//print current date and time.
	printf("Updated time is %.2i:%.2i:%.2i\n", updatedDateAndTime.current_time.hour,
		updatedDateAndTime.current_time.minutes, updatedDateAndTime.current_time.seconds );
	printf("Updated date is %i/%i/%.2i\n", updatedDateAndTime.current_date.month,
				updatedDateAndTime.current_date.day, updatedDateAndTime.current_date.year % 100);
/*
	struct time timeUpdate (struct time now);
	struct time currentTime, nextTime;

	

	nextTime = timeUpdate (currentTime);

*/
}

struct dateAndTime clockKeeper(struct dateAndTime now)
{
	struct time timeUpdate (struct time now);
	struct date dateUpdate (struct date today);
	// call the timeUpdate function
	now.current_time = timeUpdate(now.current_time);//is this all the whole structure? or just

	// if the time reaches midnight, 
	if(now.current_time.hour == 0 && now.current_time.minutes == 0 && now.current_time.seconds == 0 )
	{
		now.current_date = dateUpdate(now.current_date);
	}

	// the function should call the dateUpdate function

	return now;
} 

// Function to update the time by one seconds
struct time timeUpdate (struct time now)
{
	

	++now.seconds;
	
	if ( now.seconds == 60 )  { // next minute
		now.seconds = 0;
		++now.minutes;

		if ( now.minutes == 60 ) {   // next hour
			now.minutes = 0;
			++now.hour;

			if ( now.hour == 24 )  // midnight
				now.hour = 0;

		}

	}

	return now;
}



//dateUpdate function
struct date dateUpdate (struct date today)
{
	struct date tomorrow;
	int numberOfDays (struct date d);

	if( today.day != numberOfDays (today) ){
		tomorrow.day = today.day + 1;
		tomorrow.month = today.month;
		tomorrow.year = today.year;
	}
	else if ( today.month == 12 ) { 		// end of year
		tomorrow.day = 1;
		tomorrow.month = 1;
		tomorrow.year = today.year + 1;
	}
	else {
		tomorrow.day = 1;
		tomorrow.month = today.month + 1;
		tomorrow.year = today.year;
	}

	return tomorrow;
}

// Function to find the number of days in a month 

int numberOfDays (struct date d)
{
	int days; 
	bool isLeapYear (struct date d);
	const int daysPerMonth[12] = 
	{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if ( isLeapYear (d) == true && d.month == 2 )
		days = 29;
	else
		days = daysPerMonth[d.month - 1];

	return days;
}

bool isLeapYear (struct date d)
{
	bool leapYearFlag;

	if ( (d.year % 4 == 0 && d.year % 100 != 0)  || 
		d.year % 400 == 0 )
		leapYearFlag = true; 		// It's a leap year
	else
		leapYearFlag = false; 		// Not a leap year

	return leapYearFlag;
}




