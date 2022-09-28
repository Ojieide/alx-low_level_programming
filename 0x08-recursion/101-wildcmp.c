#include "main.h"

/**
 * strlen_wildcmp - returns the length of a string,
 *		ignoring wildcard characters
 * @str: the string to be measured.
 *
 * Return: the length of a string.
 */
int strlen_wildcmp(char *str)
{
	int len = 0, j = 0;

	if (*(str + j))
	{
		if (*str != '*')
			len++;

		j++;
		len += strlen_wildcmp(str + j);
	}

	return (len);
}

/**
 * find_wildcmp - finds a non-wildcard character in a string
 * @str: the string to be checked
 */
void find_wildcmp(char **str)
{
	if (**str == '*')
	{
		(*str)++;
		find_wildcmp(str);
	}
}

/**
 * str_wildcmp - checks if a string matches another string
 *		potentially containing wildcards
 * @str1: the first string to be checked
 * @str2: the second string to be checked
 *
 * Return: If str1 and str2 are identical - a pointer to the null byte
 *					located at the end of str2.
 *         Otherwise - a pointer to the first unmatched character in str2.
 */
char *str_wildcmp(char *str1, char *str2)
{
	int str1_len = strlen_wildcmp(str1) - 1;
	int str2_len = strlen_wildcmp(str2) - 1;

	if (*str2 == '*')
		find_wildcmp(&str2);

	if (*(str1 + str1_len - str2_len) == *str2 && *str2 != '\0')
	{
		str2++;
		return (str_wildcmp(str1, str2));
	}

	return (str2);
}

/**
 * wildcmp - compares two strings and returns 1
 *	if the strings can be considered identical, otherwise return 0
 * @s1: first string to be compared.
 * @s2: second string to be compared - can contain the special character *
 *
 * Return: If the strings can be considered identical - 1,
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		find_wildcmp(&s2);
		s2 = str_wildcmp(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
