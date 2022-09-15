#include <stdio.h>
#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @void: no arguement for the function
 *
 * Return: nothing.
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		putchar('_');
	}
	putchar('\n');
}
