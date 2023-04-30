#include "main.h"

/**
 * print_times_table - Function that prints the n times table, starting with 0.
 * @n: times table to be printed.
 *
 * Return: nothing.
 */
void print_times_table(int n)
{
	int x, y, mul;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 1; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				mul = x * y;
				if (mul > 99)
				{
					_putchar(mul / 100 + '0');
					_putchar((mul / 10 % 10) + '0');
					_putchar(mul % 10 + '0');
				}
				else if (mul > 9)
				{
					_putchar(' ');
					_putchar(mul / 10 + '0');
					_putchar(mul % 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(mul + '0');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		return;
	}
}

