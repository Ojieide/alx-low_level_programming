#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count
 * @av: argument vector
 * Return: NULL if ac == 0 or av == NULL,
 *	On success  a pointer to a new string.
 */
char *argstostr(int ac, char **av)
{
	char *x, *y;
	int a, b, c;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0, c = 0; a < ac; a++)
	{
		for (b = 0; *(*(av + a) + b) != '\0'; b++, c++)
			;
		c++;
	}
	c++;

	x = malloc(c * sizeof(char));
	if (x == NULL)
		return (NULL);

	y = x;
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			*x = av[a][b];
			x++;
		}
		*x = '\n';
		x++;
	}
	return (y);
}
