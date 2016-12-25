
/**
 * Exercise 3 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex3.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program that defines a macro MIN that gives the minimum of two values 
 * Then tests the macro definition
 * 
 * 
 */

 #include <stdio.h>

//define a macro MIN
 #define 		MIN(a,b) 	( ((a) < (b)) ? (a) : (b) ) 	 	

 int main()
 {
 	int a, b;


 	printf("Give me two numbers\n");
 	printf("The first is:\n");
 	scanf("%i", &a);
 	printf("The second is\n");
 	scanf("%i", &b);

 	printf("The smallest of these two numbers is\n");
 	printf("%i\n", MIN(a,b));

 	return 0; 
 	

 }