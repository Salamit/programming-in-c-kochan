/**
 * Exercise 8 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex8.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program defines a macro IS_DIGIT that gives a nonzero value 
 * a character is a digit '0' through '9'. IS_DIGIT is then used
 * in another macro IS_SPECIAL which gives a nonzero result if 
 * a character is a special character; that is, not alphabetic
 * and not a digit. 
 */

 #include <stdio.h>

 #define 	IS_ALPHABETIC(x) 	(IS_UPPER_CASE(x) || IS_LOWER_CASE(x)) 
 #define 	IS_UPPER_CASE(x) 	( ((x) >= 'A') && ((x) <= 'Z') ) 
 #define 	IS_LOWER_CASE(x) 	( ((x) >= 'a') && ((x) <= 'z') )
 #define 	IS_DIGIT(x)			( ((x) >= 0 ) && ((x) <= 9) )
 #define 	IS_SPECIAL(x) 		( (!(IS_ALPHABETIC(x) || (IS_DIGIT(x))) ? 1 : 0))

  int main(void)
 {
 	printf("%i\n", IS_SPECIAL('*'));

 	return 0;
 } 	


