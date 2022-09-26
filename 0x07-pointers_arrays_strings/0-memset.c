#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a pointer to the memory area to be filled
 * @b: the constant byte that fills the memory area
 *
 * Return: a pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{

		*(s + a) = b;
		a += 1;
	}
	return (s);
}
