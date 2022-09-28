#include "main.h"

/**
 * factorial -  returns the factorial of a given number
 * @n: a given number whose factorial is computed
 *
 * Return: -1 If n < 0,
 *	the factorial of n if n > 0.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
