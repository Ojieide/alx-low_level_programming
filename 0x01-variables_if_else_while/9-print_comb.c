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
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');
	return (0);
}
