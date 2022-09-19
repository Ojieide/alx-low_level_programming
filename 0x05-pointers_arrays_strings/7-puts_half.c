#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: pointer to char
 *
 * Return: nothing.
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	while (str[a] != '\0')
	{
		a += 1;
		b = a / 2;
	}
	if (a % 2 == 1)
	{
		b += 1;
	}
	while (str[b] != '\0')
	{
		_putchar(*(str + b));
		b++;
	}
	_putchar('\n');
}
