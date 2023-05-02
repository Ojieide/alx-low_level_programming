#include "main.h"

/**
 * print_square - Function that prints a square.
 * @size: size of the square.
 *
 * Return: newline, If size is 0 or less
 *	#, otherwise.
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size - 1; j++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

