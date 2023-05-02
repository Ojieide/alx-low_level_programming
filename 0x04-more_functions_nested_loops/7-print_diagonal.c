#include "main.h"

/**
 * print_diagonal - Function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed.
 *
 * Return: \n, If n is 0 or less.
 *	\, otherwise.
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j <= i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}



