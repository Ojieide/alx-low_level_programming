#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: bytes of s2
 *
 * Return: On success - pointer to a newly allocated space in memory
 *	On failure - NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	char *b = "";
	unsigned int i, j;

	i = j = 0;
	if (s1 == NULL)
		s1 = b;
	if (s2 == NULL)
		s2 = b;
	while (s1[i] != '\0')
		i += 1;
	while (s2[j] != '\0')
		j += 1;
	j++;
	if (n >= j)
		n = j;
	a = malloc(sizeof(*a) * n + (i + 1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		a[i] = s1[i];
		i += 1;
	}
	j = 0;
	while (s2[j] != '\0' && j < n)
	{
		a[i] = s2[j];
		i++;
		j++;
	}
	a[i] = '\0';
	return (a);
}
