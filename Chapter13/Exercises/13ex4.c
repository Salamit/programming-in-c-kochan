/**
 * Exercise 4 from Chapter 13 of Programming in C, 3rd Edition
 * 13ex4.c
 *
 * T.Salami
 * salamidottopeatgmaildotcom
 *
 * Program that defines a macro MAX3 that gives the maximum 
 * of the values then tests the macro definition
 * 
 * 
 */

 #include <stdio.h>

 #define 		MAX3(a,b,c) 	(((a) > (b)) ? (( (a) > (c)) ? (a) : (c )) : (((b) > (c)) ? (b) : (c))) 

 int main()
 {
 	int a, b, c;

 	printf("Provide 3 numbers\n");
 	printf("The first is:\n");
 	scanf("%i", &a);
 	printf("The second is:\n");
 	scanf("%i", &b);
 	printf("The third is:\n");
 	scanf("%i", &c);

 	printf("The largest of the 3 numbers is %i\n", MAX3(a,b,c));

 	return 0;
 }