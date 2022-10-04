#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the 2 dimensional array of integers
 * @height: height of the 2 dimensional array of integers
 *
 * Return: On success - a pointer to a 2 dimensional array of integers,
 *	If width or height is 0 or negative - NULL
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int a, b, c, d;

	a = b = c = 0;
	if (width <= 0 || height <= 0)
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		arr[a] = malloc(width * sizeof(int));
		if (arr[a] == NULL)
		{
			for (d = 0; d < a; d++)
				free(arr[d]);
			free(arr);
			return (NULL);
		}
	}
	for (b = 0; b < height; b++)
	{
		for (c = 0; c < width; c++)
			arr[b][c] = 0;
	}
	return (arr);
}
