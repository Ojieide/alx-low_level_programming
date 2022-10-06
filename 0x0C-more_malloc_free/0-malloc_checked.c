#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of memory bytes to be allocated
 *
 * Return: a pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *ma = malloc(b);

	if (ma == NULL)
		exit(98);

	return (ma);
}
