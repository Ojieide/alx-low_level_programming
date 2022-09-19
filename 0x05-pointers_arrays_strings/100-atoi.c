#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be convert
 *
 * Return: the integer value of the converted string.
 */


int _atoi(char *s)
{
	int a = 0;
	int b = 0;
	int sign = 1;

	while ((s[a] < '0' || s[a] > '9') && s[a] != 0)
	{
		if (s[a] == '-')
			sign *= -1;
		a++;
	}
	while ((s[a] >= '0' && s[a] <= '9') && s[a] != 0)
	{
		if (b >= 0)
		{
			b = b * 10 - (s[a] - '0');
			a++;
		}
		else
		{
			b = b * 10 - (s[a] - '0');
			a++;
		}
	}
	sign *= -1;
	return (b * sign);
}
