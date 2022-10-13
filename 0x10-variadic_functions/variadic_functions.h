#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list ptr);
void print_string(va_list ptr);
void print_float(va_list ptr);
void print_int(va_list ptr);

typedef struct type
{
	char *type;
	void (*f)();
} type_t;

#endif
