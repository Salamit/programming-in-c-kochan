/**
 * Exercise 8 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex9.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program defines a macro ABSOLUTE_VALUE that computes the absolute value
 * of its argument such that the expression ABSOLUTE_VALUE (x + delta)
 * is properly calculated 
 */

 #include <stdio.h>

 #define 	ABSOLUTE_VALUE(x) 		(((x) >= 0) ? (x) : -(x))

 int main(void)
 {
 	printf("%i\n", ABSOLUTE_VALUE(3 + 4));
 	printf("%i\n", ABSOLUTE_VALUE(3 - 4));

 	return 0;
 } 	