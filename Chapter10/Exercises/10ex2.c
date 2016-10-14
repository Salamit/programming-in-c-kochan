// Example 4 from Chapter 10 of Programming in C, 3rd Edition
// File 10ex2.c

/* The while statement 
while ( s1[i] == s2 [i] &&
				s1[i] != '\0' && s2[i] != '\0' )
can be replaced with 

while ( s1[i] == s2[i] && s1[i] != '\0' )

because once the initial logical expression "s1[i] == s2 [i]" in the first while statement
holds then the values of s1[i] and s2[i] are the same. Therefore a value of s1[i] that is 
not equal to '\0' means that s2[i] is also not equal to '\0' if s1[i] == s2 [i]". 
*/


#include <stdio.h>
#include <stdbool.h>

bool equalStrings (const char s1[], const char s2[])
{
	int i = 0;
	bool areEqual;

	while ( s1[i] == s2 [i] &&
				s1[i] != '\0' && s2[i] != '\0' )
		++i;

	if ( s1[i] == '\0' && s2[i] == '\0' )
		areEqual = true;
	else
		areEqual = false;

	return areEqual;

}

int main (void)
{
	bool equalStrings (const char s1[], const char s2[]);
	const char stra[] = "string compare test";
	const char strb[] = "string";

	printf("%i\n", equalStrings (stra, strb));
	printf("%i\n", equalStrings (stra, stra));
	printf("%i\n", equalStrings (strb, "string"));

	return 0;
}