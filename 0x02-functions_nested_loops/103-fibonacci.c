#include <stdio.h>

/**
 * main - Finds and prints the sum of the even-valued terms
 * 	in the Fibonacci sequence
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int num1 = 0, num2 = 1, sum, even_sum;
	
	while (1)
	{
		sum = num1 + num2;
		num1 = num2;
		num2 = sum;
		
		if (sum > 4000000)
		{
			break;
		}
		if (sum % 2 == 0)
		{
			even_sum = sum + even_sum;
		}
	}
	printf("%lu\n", even_sum);
	return (0);
}

		
