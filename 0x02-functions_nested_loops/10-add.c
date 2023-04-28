#include "main.h"

/**
 * add - Function that adds two integers and returns the result.
 * @x: first integer.
 * @y: second integer.
 *
 * Return: result(value of x+y).
 */
int add(int x, int y)
{
	int res = x + y;

	if ((x >= 0 && y <= 0) || (x <= 0 && y >= 0))
	{
		return (res);
	}
	return (0);
}
