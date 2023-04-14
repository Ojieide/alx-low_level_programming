#include <stdio.h>

/**
 * main - Prints all the letters in lowercase except q and e
 *
 * Return: On Success(Always 0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
		}
		else
		{
			putchar(c);
			c++;
		}
	}
	putchar('\n');
	return (0);
}
