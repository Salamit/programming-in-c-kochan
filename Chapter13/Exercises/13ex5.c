/**
 * Exercise 5 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex5.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program that defines a macro SHIFT that performs the 
 * identical purpose as the shift function of Program 12.3.
 *
 * 
 * 
 */

 #include <stdio.h>

 #define 	SHIFT(value,n) 		(((n) > 0) ? (value << n) : (value >> -n))

 int main(void)
 {
 	unsigned int w1 = 0177777u, w2 = 0444u;
 

 	printf("%o\t%o\n", SHIFT(w1,5), w1 << 5);
 	printf("%o\t%o\n", SHIFT(w1, -6), w1 >> 6);
 	printf("%o\t%o\n", SHIFT(w2, 0), w2 >> 0);
 	printf("%o\n", SHIFT(SHIFT(w1, -3), 3));

 	return 0;
 }