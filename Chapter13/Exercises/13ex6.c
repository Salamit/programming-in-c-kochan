/**
 * Exercise 6 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex6.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program that defines a macro IS_UPPER_CASE that gives 
 * a nonzero value if a character is an uppercase letter.
 */

 #include <stdio.h>

 #define 	IS_UPPER_CASE(x) 	((( (x) >= 'A' ) && ((x) <= 'Z' )) ? 1 : 0 ) 

 int main(void)
 {
 	printf("%i\n", IS_UPPER_CASE('V'));
 	printf("%i\n", IS_UPPER_CASE('v'));

 	return 0;
 } 	