

#include <stdio.h>

int sumOfDigits, number, x = 0;

int main()
{
	printf("Give me a number\n");
	printf("I will calculate the sum of the digits\n");
	printf("of an integer\n");
	scanf("%i", &number);


	sumOfDigits = 0;

	for(x = number; x > 10; x = x/10)
	{
		sumOfDigits += (x % 10);
	}

	sumOfDigits += x;

	printf("%i is the sum of the digits\n", sumOfDigits);

	return 0;

}
