#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int i = 612852475143;

	unsigned long int j;

	for (j = 2; j < i; j++)
	{
		while (i % j == 0)
		{
			i = i / j;
		}
	}
	printf("%lu\n", i);

	return (0);
}




