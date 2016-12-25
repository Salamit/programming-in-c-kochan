/**
 * Exercise 7 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex7.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program that defines a macro IS_ALPHABETIC that gives 
 * a nonzero value if a character is an an alphabetic character.
 * The macro uses two previously defined macros IS_UPPER_CASE and
 * IS_LOWER_CASE in the definition of IS_ALPHABETIC.
 */

 #include <stdio.h>


 #define 	IS_ALPHABETIC(x) 	((IS_UPPER_CASE(x) || IS_LOWER_CASE(x)) ? 1 : 0 )
 #define 	IS_UPPER_CASE(x) 	( ((x) >= 'A') && ((x) <= 'Z') ) 
 #define 	IS_LOWER_CASE(x) 	( ((x) >= 'a') && ((x) <= 'z') )

 int main(void)
 {
 	printf("%i\n", IS_ALPHABETIC('V'));
 	printf("%i\n", IS_ALPHABETIC('v'));
 	printf("%i\n", IS_ALPHABETIC('1'));

 	return 0;
 } 	
