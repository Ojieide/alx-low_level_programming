#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *	which contains a copy of the string given as a parameter
 * @str: string to be copied
 *
 * Return: On success a pointer to the duplicated string,
 *	NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dup;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		j++;

	dup = malloc(sizeof(char) * (j + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[j] = '\0';

	return (dup);
}
