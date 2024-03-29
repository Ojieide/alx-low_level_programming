#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: integer to be printed.
 *
 * Return: nothing.
 */
void print_number(int n)
{
	unsigned int i = n;
	
	if (n < 0)
	{
		i = -n;
		_putchar('-');
	}
	
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar(i % 10 + '0');
}
