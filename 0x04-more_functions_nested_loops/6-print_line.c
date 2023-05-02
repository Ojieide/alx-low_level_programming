#include "main.h"

/**
 * print_line - Function that draws a straight line in the terminal.
 * @n: number of times the character _ should be printed
 *
 * Return: \n, If n is 0 or less.
 *	_, otherwise.
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
