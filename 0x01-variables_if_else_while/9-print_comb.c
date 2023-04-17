#include <stdio.h>
#include <string.h>

/**
 * main - Prints all possible combinations of
 *	single-digit numbers separated by commas
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = '0';

	while (i <= '8')
	{
		putchar(i);
		putchar(',');
		putchar(' ');
		i++;
	}
	if (i == '9')
	{
		putchar(i);
	}
	return (0);
}
