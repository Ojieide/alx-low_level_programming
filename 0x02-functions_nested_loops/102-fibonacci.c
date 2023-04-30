#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0.
 */
int main(void)
{
	/* Local variable declaration */
	int i;
	unsigned long int num1 = 0, num2 = 1, sum;

	/* Printing the numbers in the sequence */
	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}

