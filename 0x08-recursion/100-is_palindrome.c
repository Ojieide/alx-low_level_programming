#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to receive
 *
 * Return: the length of a string.
 */


int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + _strlen_recursion(s));
}

/**
 * get_palindrome - check if a string is a palindrome
 * @s: the string to be checked
 * @len: length of the string
 *
 * Return: If the string is a palindrome - 1,
 *         If the string is not a palindrome - 0.
 */

int get_palindrome(char *s, int len)
{
	if (*s != *(s + len - 1))
		return (0);
	else if (*s == '\0')
		return (1);
	return (get_palindrome(s + 1, len - 2));
}

/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not
 * @s: the string to be checked
 *
 * Return: If the string is a palindrome - 1,
 *         If the string is not a palindrome - 0.
 */

int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);
	return (get_palindrome(s, len));
}
