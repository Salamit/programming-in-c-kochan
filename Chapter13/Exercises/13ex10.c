/**
 * Exercise 8 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex9.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 */

#include <stdio.h>

//Consider the definition of the printint macro from this chapter:

#define  	printint(n)  printf("%i\n", x ## n)

/*
int main()
{
	//Could the following be used to display the values
	// of the 100 variables x1–x100? Why or why not?
	for (int i = 1; i < 100; ++i)
		printx(i);

	return 0;

}
*/

//My answer: No it won't display the values because printx is itself undefined. 


