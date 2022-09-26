#include "main.h"

/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: the initial segment of string
 * @accept: prefix substring
 *
 * Return: the number of bytes in the initial segment of s
 *	which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b = 0;
	int c;

	while (*s != '\0')
	{
		c = 0;
		while (*(accept + b) != '\0')
		{
			if (*s == *(accept + b))
				c = 1;
			b += 1;
		}
		b = 0;
		if (c == 0)
			break;
		a += 1;
		s++;
	}
	return (a);
}

