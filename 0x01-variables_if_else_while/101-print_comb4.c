#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits
 *
 * Return: Always 0.
 */
int main(void)
{
	int w, x, y, z;

	w = 0;

	while (w < 1000)
	{
		/* Single digit */
		x = w % 10;
		/* Double digit */
		y = (w / 10) % 10;
		/* Triple digits */
		z = w / 100;

		if (z < y && y < x)
		{
			putchar(z + '0');
			putchar(y + '0');
			putchar(x + '0');
			if (w < 789)
			{
				putchar(',');
				putchar(' ');
			}
		}
		w++;
	}
	putchar('\n');
	return (0);
}

