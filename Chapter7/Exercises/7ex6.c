// Exercise 6 from Chapter 7 of Programming in C, 3rd Edition
// File 7ex6.c

// Prints out the first 15 Fibonacci numbers without using an array


 #include <stdio.h>

 int main (void)
 {
 	int x = 0, y = 1, i, z;

 	printf("%i\n", x); //The first Fibonacci number
 	printf("%i\n", y); //The second Fibonacci number



 	// Print the rest of the Fibonacci numbers
 	for (int i = 0; i < 13; ++i) //Since 2 of the Fibonacci numbers have already been printed only 13
 									//only 13 remain to be printed. Hence i = 13
 	{
 		z = x + y;
 		x = y;
 		y = z;
 		printf("%i\n", z);

 	}


 }
 