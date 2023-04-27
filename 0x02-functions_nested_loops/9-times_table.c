#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: nothing.
 */
void times_table(void)
{
	int i, j, n, mul;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		n = 9;

		for (j = 0; j <= n; j++)
		{
			mul = i * j;

			_putchar(' ');
			_putchar(',');

			if (mul > 9)
			{
				_putchar(mul / 10 + '0');
				_putchar(mul % 10 + '0');
			}
			else
			{
				_putchar(mul + '0');
			}
		}
		_putchar('\n');
	}
}
