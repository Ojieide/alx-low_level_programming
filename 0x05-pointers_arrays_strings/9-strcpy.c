#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *	including the terminating null byte (\0)
 *	to the buffer pointed to by dest.
 *
 * @dest: the buffer the string is copied to
 * @src: the source of the string being copied
 *
 * Return: the pointer to dest.
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		*(dest + n) = *(src + n);
	}
	*(dest + n) = '\0';
	return (dest);
}
