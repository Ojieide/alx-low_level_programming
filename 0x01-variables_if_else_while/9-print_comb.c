#include <stdio.h>

/**
 * main - Prints all possible combinations of
 *	single-digit numbers separated by commas
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
	return (0);
}
