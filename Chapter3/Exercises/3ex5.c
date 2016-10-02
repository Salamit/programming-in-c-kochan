// Exercise 5 from Chapter 3 of Programming in C, 3rd Edition
// File 3ex5.c

/* This program is the debugged version of the bugged program in
exercise 5 chapter 3. */

#include <stdio.h>

int main (void)
{
	int sum; //old code: INT sum

	//Compute result. old comment: /*COMPUTE RESULT
	sum = 25 + 37 + 19 //old code: 25 + 37 - 19
	/* Display results */ //old comment: was not terminated with a '*/'
	printf("The answer is %i\n", sum);
	return 0;
	  
}
