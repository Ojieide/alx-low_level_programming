#include <stdio.h>

/**
 * main - Prints all possible different combinations of two digits.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		/* Single digit */
		y = x % 10;
		/* Double digit */
		z = x / 10;

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');
			if (x < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		x++;
	}
	putchar('\n');
	return (0);
}
