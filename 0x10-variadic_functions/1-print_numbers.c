#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	int j = 0;


	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, int);
		if (i < (n - 1) && separator != 0)
			printf("%d%s", j, separator);
		else
			printf("%d", j);
	}
	va_end(ptr);
	printf("\n");
}
