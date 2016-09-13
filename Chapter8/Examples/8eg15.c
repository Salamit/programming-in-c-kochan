// Example 15 from Chapter 8 of Programming in C, 3rd Edition
// File 8eg15.c

// Program to illustrate static and automatic variables

#include <stdio.h>

void auto_static (void)
{
	int         autoVar = 1;
	static int  staticVar = 1;

	printf("automatic = %i, static = %i\n", autoVar, staticVar);

	++autoVar;
	++staticVar;
}

int main (void)
{
	int i;
	void auto_static (void);

	for ( i = 0; i < 5; ++i )
		auto_static ();

	return 0;
}