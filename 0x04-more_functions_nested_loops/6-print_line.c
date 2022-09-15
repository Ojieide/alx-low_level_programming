#include <stdio.h>
#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 *
 * @n: parameter of the function
 *
 * Return: nothing.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
