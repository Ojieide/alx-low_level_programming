#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: size in bytes of allocated space for `ptr`
 * @new_size: new size in bytes for new allocated space
 * Return: If new_size == old_size - ptr.
 *If new_size == 0 and ptr is not NULL - NULL.
 *Otherwise - a pointer to the reallocated memory block.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *x, *y;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		x = malloc(new_size);
		if (x == NULL)
			return (NULL);
		return (x);
	}

	x = malloc(new_size);
	if (x == NULL)
		return (NULL);
	y = ptr;
	for (i = 0; i < old_size; i++)
		x[i] = y[i];
	free(ptr);
	return (x);
}
