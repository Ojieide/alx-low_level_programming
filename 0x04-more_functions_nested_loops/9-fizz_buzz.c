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
	int num = 1;

	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
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
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}
