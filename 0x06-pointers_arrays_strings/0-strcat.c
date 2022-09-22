#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: pointer to source string
 * @dest: pointer to destination string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	unsigned int a = 0;
	unsigned int b = 0;

	while (*(dest + a) != '\0')
		a++;
	while (*(src + b) != '\0')
	{
		*(dest + a) = *(src + b);
		a++;
		b++;
	}
	return (dest);
}
