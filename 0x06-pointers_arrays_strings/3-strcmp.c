#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to char string 1
 * @s2: pointer to char string 2
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int cmp;

	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) > *(s2 + i))
		{
			cmp = *(s1 + i) - *(s2 + i);
			return (cmp);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			cmp = *(s1 + i) - *(s2 + i);
			return (cmp);
		}
		i += 1;
	}
	return (0);
}
