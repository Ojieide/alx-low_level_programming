#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_char - print char type element from va_list
 * @ptr: va_list passed to function
 */

void print_char(va_list ptr)
{
	printf("%c", va_arg(ptr, int));
}

/**
 * print_string - print string element from va_list
 * @ptr: va_list passed to function
 */

void print_string(va_list ptr)
{
	char *str;

	str = va_arg(ptr, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_float - print float type element from va_list
 * @ptr: va_list passed to function
 */

void print_float(va_list ptr)
{
	printf("%f", va_arg(ptr, double));
}

/**
 * print_int - print int type element from va_list
 * @ptr: va_list passed to function
 */

void print_int(va_list ptr)
{
	printf("%d", va_arg(ptr, int));
}

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	unsigned int i, j;
	va_list ptr;
	char *seperator;

	type_t ops[] = {
		{ "c", print_char },
		{ "f", print_float },
		{ "s", print_string },
		{ "i", print_int }
	};

	i = 0;
	seperator = "";
	va_start(ptr, format);
	while (format != NULL && format[i / 4] != '\0')
	{
		j = i % 4;
		if (ops[j].type[0] == format[i / 4])
		{
			printf("%s", seperator);
			ops[j].f(ptr);
			seperator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
