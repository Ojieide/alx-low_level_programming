#include "main.h"
#include <stdio.h>

/**
 * _abs - Function that computes the absolute value of an integer.
 * @j: integer whose value is computed.
 *
 * Return: Always 0.
 */
int _abs(int j)
{
	if (j < 0)
	{
		return ((-1) * j);
	}
	else
	{
		return (j);
	}
}

