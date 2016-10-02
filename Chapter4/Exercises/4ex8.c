// Exercise 8 from Chapter 4 of Programming in C, 3rd Edition
// File 4ex8.c

/* This program finds the next largest even multiple for the given
 values i and j. The integer i is rounded off to the 
  to the next largest even multiple of another integer j using 
  the following formula: Next_multiple = i + j - i % j */


#include <stdio.h>

#define I1 365
#define J1 7
#define I2 12258
#define J2 23
#define I3 996
#define J3 4

int main()
{
	int multiple1, multiple2, multiple3;

	multiple1 = I1 + J1 - I1 % J1;
	multiple2 = I2 + J2 - I2 % J2;
	multiple3 = I3 + J3 - I3 % J3;

	printf("When i = %i and j = %i, the multiple is %i\n", I1, J1, multiple1);
	printf("When i = %i and j = %i, the multiple is %i\n", I2, J2, multiple2);
	printf("When i = %i and j = %i, the multiple is %i\n", I3, J3, multiple3);


	return 0;


}


