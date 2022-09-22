#include "main.h"

/**
 * _strncpy - copies a string
 * @src: pointer to source char
 * @dest: pointer to destination char
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && *(src + a) != '\0')
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a != n)
		dest[a++] = '\0';
	return (dest);
}

