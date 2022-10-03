#include <stdlib.h>

/**
 * create_array - creates an array of chars, 
 *		and initializes it with a specific char
 * @size: size of the array to be initialized
 * @c: specific char that intializes the array
 *
 * Return: NULL if size = 0,
 *	a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int j = 0;

	if (size != 0)
		ar = malloc(size * sizeof(char));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (j < size)
	{
		ar[j] = c;
		j += 1;
	}
	return (ar);
}
