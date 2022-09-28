#include "main.h"

/**
 * get_prime - finds prime number
 * @num: the number to be checked
 * @a: test variable
 *
 * Return: If the integer is not prime - 0,
 *         If the number is prime - 1.
 */

int get_prime(int num, int a)
{
	if (num == a)
		return (1);
	if (num % a == 0)
		return (0);
	return (get_prime(num, a + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number
 * otherwise return 0
 * @n: the number to be checked
 *
 * Return: If the integer is not prime - 0,
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (get_prime(n, 2));
}
