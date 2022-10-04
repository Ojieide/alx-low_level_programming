#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: On success a pointer to to a newly allocated space in memory
 *	which contains the contents of s1, followed by the contents of s2,
 *	NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int st, concat_st = 0, i = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (st = 0; s1[st] || s2[st]; st++)
		i++;

	concat_str = malloc(sizeof(char) * i);

	if (concat_str == NULL)
		return (NULL);

	for (st = 0; s1[st]; st++)
		concat_str[concat_st++] = s1[st];

	for (st = 0; s2[st]; st++)
		concat_str[concat_st++] = s2[st];

	return (concat_str);
}
