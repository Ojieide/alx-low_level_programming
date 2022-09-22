#include "main.h"

/**
 * str_add - adds the numbers stored in two strings
 * @n1: the string containing the first number to be added
 * @n2: the string containing the second number to be added
 * @r: the buffer to store the result
 * @r_idx: The current index of the buffer.
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *str_add(char *n1, char *n2, char *r, int r_idx)
{
	int i, j = 0;

	for (; *n1 && *n2; n1--, n2--, r_idx--)
	{
		i = (*n1 - '0') + (*n2 - '0');
		i += j;
		*(r + r_idx) = (i % 10) + '0';
		j = i / 10;
	}

	for (; *n1; n1--, r_idx--)
	{
		i = (*n1 - '0') + j;
		*(r + r_idx) = (i % 10) + '0';
		j = i / 10;
	}

	for (; *n2; n2--, r_idx--)
	{
		i = (*n2 - '0') + j;
		*(r + r_idx) = (i % 10) + '0';
		j = i / 10;
	}

	if (j && r_idx >= 0)
	{
		*(r + r_idx) = (j % 10) + '0';
		return (r + r_idx);
	}

	else if (j && r_idx < 0)
		return (0);

	return (r + r_idx + 1);
}

/**
 * infinite_add - adds two numbers
 * @n1: the first number to be added
 * @n2: the second number to be added
 * @r: the buffer that the function will use to store the result
 * @size_r: the buffer size
 *
 * Return: If r can store the sum - a pointer to the result.
 *         If r cannot store the sum - 0.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a, b = 0, c = 0;

	for (a = 0; *(n1 + a); a++)
		b++;

	for (a = 0; *(n2 + a); a++)
		c++;

	if (size_r <= b + 1 || size_r <= c + 1)
		return (0);

	n1 += b - 1;
	n2 += c - 1;
	*(r + size_r) = '\0';

	return (str_add(n1, n2, r, --size_r));
}
