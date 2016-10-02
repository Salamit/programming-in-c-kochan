// Exercise 4 from Chapter 6 of Programming in C, 3rd Edition
// File 6ex4.c

// Program to produce a simple printing calculator

#include <stdio.h>
#include <ctype.h>

int main()
{
	
	float value, accumulator;
	char operator;

	printf("Begin Calculations\n");
	
	accumulator = 0;

	//Loop for the printing calulator. The loop ends when operator is = 'E' 
	for ( ; scanf ("%f %c", &value, &operator), operator != 'E'; )
	{

		
		// The conditions and their associated calculations

		switch (operator)
		{
			case 'S': 							//update this to accept little s
				accumulator = value;
				printf(" = %f\n", accumulator);
				break;
			case '+':
				accumulator += value;
				printf(" = %f\n", accumulator);
				break;
			case '-':
				accumulator -= value;
				printf(" = %f\n", accumulator);
				break;
			case '*':
				accumulator *= value;
				printf(" = %f\n", accumulator);
				break;
			case '/':
				if (value != 0)
					{
						accumulator /= value;
						printf(" = %f\n", accumulator);
					}
				else
				{
					printf("Imagine that you have zero cookies\n" );
					printf("and you split them evenly among zero friends.\n");
					printf("How many cookies does each person get?\n");
					printf("See? It doesn’t make sense. \n");
					printf("And Cookie Monster is sad that there are no cookies,\n");
					printf("and you are sad that you have no friends.\n");
				}
				break;
			default:
				printf ("Unknown operator.\n");
				break; 

		}

		
	}

	return 0;
	
	
} 
