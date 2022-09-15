#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 * excluding 2 and 4
 *
 * @void: no argument is needed for calling the function
 *
 * Return: nothing.
 */
void print_most_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		if ((n == '2') || (n == '4'))
		{
			continue;
		}
		_putchar(n);
	}
	_putchar('\n');
}
