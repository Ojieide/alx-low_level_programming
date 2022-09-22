#include "main.h"

/**
 * _strncat - concatenates two strings using at most n bytes from src
 * @src: pointer to source char
 * @dest: pointer to destination char
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	unsigned int a = 0;
	int b = 0;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
	{
		if (b < n)
		{
			*(dest + a) = *(src + b);
			a++;
		}
		b++;
	}
	return (dest);
}
