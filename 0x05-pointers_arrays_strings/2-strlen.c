#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string in int
 */
int _strlen(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n += 1;
	}
	return (n);
}
