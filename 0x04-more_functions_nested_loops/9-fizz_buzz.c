#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, multiples of 3 Fizz,
 * multiples of 5 Buzz, multiples of 3 and 5 FizzBzz
 * @void: no arguement for the function
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
