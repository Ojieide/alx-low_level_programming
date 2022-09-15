#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * prints Fizz for multiples of three and Buzz for the multiples of five
 * prints FizzBuzz for multiples of three and five
 *
 * Return: On success 0
 */

int main(void)
{
	int n = 1;

	while (n++ < 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((n % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((n % 5) == 0)
		{
			if (n != 100)
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
			printf("%d ", n);
		}
	}
	printf("\n");

	return (0);
}
