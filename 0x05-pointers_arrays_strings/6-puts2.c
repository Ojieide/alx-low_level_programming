#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: pointer to char
 *
 * Return: nothing.
 */

void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			_putchar(*(str + n));
		}
		n += 1;
	}
	_putchar('\n');
}
