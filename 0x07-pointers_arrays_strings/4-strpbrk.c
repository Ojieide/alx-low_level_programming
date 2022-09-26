#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: the string to be searched
 * @accept: a set of bytes searched for in string s
 *
 * Return: if the byte is found
 *	 a pointer to the byte in s that matches one of the bytes in accept
 *	 if no such byte is found
 *	 NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0;
	int b;

	while (*s != '\0')
	{
		b = 0;
		while (*(accept + a) != '\0')
		{
			if (*s == *(accept + a))
				b = 1;
			a++;
		}
		a = 0;
		if (b == 1)
			return (s);
		s++;
	}
	return (NULL);
}
