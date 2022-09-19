#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: pointer to string
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int n = 0;

	while (*(s + n) != '\0')
		n += 1;
	n -= 1;
	while (n >= 0)
	{
		_putchar(*(s + n));
		n--;
	}
	_putchar('\n');
}
