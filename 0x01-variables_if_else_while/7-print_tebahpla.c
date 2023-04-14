#include <stdio.h>

/**
 * main - Prints the lowercase alphabet in reverse
 *
 * Return: On Success(Always 0).
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
