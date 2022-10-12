#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: the name to be printed.
 * @f: a pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
