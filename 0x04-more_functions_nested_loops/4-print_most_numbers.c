#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Function that prints the numbers
 *			from 0 to 9 except 2 and 4
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
		}
		else
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}


