#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer,
 *		starting from 00:00 to 23:59.
 *
 * Return: nothing.
 */
void jack_bauer(void)
{
	int hrs = 0;

	int mins = 0;

	int hrs_rem, mins_rem;

	while (hrs <= 23)
	{
		while (mins <= 59)
		{
			hrs_rem = hrs % 10;

			mins_rem = mins % 10;

			_putchar(hrs / 10 + '0');
			_putchar(hrs_rem + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins_rem + '0');
			mins++;
			_putchar('\n');
		}
		hrs++;
		mins = 0;
	}
}

