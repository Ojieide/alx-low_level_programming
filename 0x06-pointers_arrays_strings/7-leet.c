#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @ch: the string to be encoded
 *
 * Return: a pointer to the resulting string ch.
 */
char *leet(char *ch)
{
	int i = 0, j;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (ch[i])
	{
		for (j = 0; j <= 7; j++)
		{
			if (ch[i] == leet[j] ||
			    ch[i] - 32 == leet[j])
				ch[i] = j + '0';
		}

		i++;
	}

	return (ch);
}
