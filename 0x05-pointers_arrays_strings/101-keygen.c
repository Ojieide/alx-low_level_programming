#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the
 *	program 101-crackme
 *
 * Return: Always 0.
 */
int main(void)
{
	char pass[84];
	int idx = 0, s = 0, d1, d2;

	srand(time(0));

	while (s < 2772)
	{
		pass[idx] = 33 + rand() % 94;
		s += pass[idx++];
	}

	pass[idx] = '\0';

	if (s != 2772)
	{
		d1 = (s - 2772) / 2;
		d2 = (s - 2772) / 2;
		if ((s - 2772) % 2 != 0)
			d1++;

		for (idx = 0; pass[idx]; idx++)
		{
			if (pass[idx] >= (33 + d1))
			{
				pass[idx] -= d1;
				break;
			}
		}
		for (idx = 0; pass[idx]; idx++)
		{
			if (pass[idx] >= (33 + d2))
			{
				pass[idx] -= d2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
