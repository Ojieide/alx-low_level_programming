#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min value
 * @max: max value
 *
 * Return: On success - the pointer to the newly created array,
 *	On failure - NULL.
 */

int *array_range(int min, int max)
{
	int *ar;
	int size;
	int x = 0;

	if (min > max)
		return (NULL);
	size = (max - min);
	ar = malloc(sizeof(*ar) * (size + 1));
	if (ar == NULL)
		return (NULL);
	while (x <= size)
	{
		ar[x] = min;
		x++;
		min++;
	}
	return (ar);
}
