#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array
 * @grid: the multidimensional array of char
 * @height: the height of the array
 *
 * Return: nothing.
 */

void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words
 * @str: string splited into words
 *
 * Return: On success a pointer to an array of strings, 
 *NULL if str == NULL or str == "".
 */

char **strtow(char *str)
{
	char **x;
	unsigned int a, height, b, c, d;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (a = height = 0; str[a] != '\0'; a++)
		if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			height++;
	x = malloc((height + 1) * sizeof(char *));
	if (x == NULL || height == 0)
	{
		free(x);
		return (NULL);
	}
	for (b = d = 0; b < height; b++)
	{
		for (a = d; str[a] != '\0'; a++)
		{
			if (str[a] == ' ')
				d++;
			if (str[a] != ' ' && (str[a + 1] == ' ' || str[a + 1] == '\0'))
			{
				x[b] = malloc((a - d + 2) * sizeof(char));
				if (x[b] == NULL)
				{
					ch_free_grid(x, b);
					return (NULL);
				}
					break;
			}
		}
		for (c = 0; d <= a; d++, c++)
			x[b][c] = str[d];
		x[b][c] = '\0';
	}
	x[b] = NULL;
	return (x);
}
