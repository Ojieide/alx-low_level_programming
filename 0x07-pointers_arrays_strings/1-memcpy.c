#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @src: pointer to source memory area
 * @dest: pointer to destination memory area
 * @n: number of bytes
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (a < n)
	{
		*(dest + a) = *(src + b);
		a += 1;
		b += 1;
	}
	return (dest);
}
