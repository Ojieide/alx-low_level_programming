#include "main.h"

/**
 *  _isalpha - function that checks for alphabetic character.
 *  @c: character to be checked.
 *
 *  Return: 1 if c is a letter, lowercase or uppercase.
 *	0 Otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
