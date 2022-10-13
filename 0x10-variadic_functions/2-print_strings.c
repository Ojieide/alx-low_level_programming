#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *j;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(ptr, char*);
		if (j == NULL)
			printf("(nil)");
		else
		{
			if (i < (n - 1) && separator != 0)
				printf("%s%s", j, separator);
			else
				printf("%s", j);
		}
	}
	va_end(ptr);
	printf("\n");
}
