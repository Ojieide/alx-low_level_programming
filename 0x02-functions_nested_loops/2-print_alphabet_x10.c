#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet in lowercase.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		i++;
		_putchar('\n');
	}
}

