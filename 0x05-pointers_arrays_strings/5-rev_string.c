#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to reverse
 *
 * Return: nothing.
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	char c;

	while (*(s + a) != '\0')
		a += 1;
	a -= 1;

	while (b < a)
	{
		c = s[a];
		s[a] = s[b];
		s[b] = c;
		b++;
		a--;
	}
}
