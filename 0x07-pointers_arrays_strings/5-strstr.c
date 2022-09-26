#include "main.h"
#include <stdio.h>

/**
 * _strstr - a function that locates a substring
 * @haystack: the string
 * @needle: the substring
 *
 * Return: if the substring is found
 *			a pointer to the beginning of the located substring
 *			if the substring is not found
 *			NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *a;
	char *b;

	while (*haystack != '\0')
	{
		a = haystack;
		b = needle;

		while (*b == *haystack && *b != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			b++;
		}
		if (*b == '\0')
			return (a);
		haystack = a + 1;
	}
	return (NULL);
}
