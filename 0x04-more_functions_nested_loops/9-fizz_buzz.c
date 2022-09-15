#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100
 * @void: no arguement for the function
 * 
 * Fizz multiples of 3, Buzz multiples of 5, FizzBuzz multiples of both
 * Return: On success 0.
 */

int main(void)
{
	int i = 1;

	while (i++ < 100)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((i % 5) == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");

	return (0);
}
