#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number.
 * @n: number whose last digit is printed.
 *
 * Return: n, value of the last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
		_putchar(last_digit + '0');
	}
	else
	{
		last_digit = (-1) * (n % 10);
		_putchar(last_digit + '0');
	}
	return (last_digit);
}


