#include "main.h"
#include <stdio.h>
/**
 * _strchr - a function that locates a character in a string
 * @s: the string hello
 * @c: the charcter to be located in the string
 * Return: if the character is found
 *	a pointer to the first occurrence of the character c in the string s
 *	if the character is not found
 *	NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
