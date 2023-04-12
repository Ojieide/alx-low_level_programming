#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to the variable n each time it is executed
 *
 * Description: prints the last digit of the number stored in the variable n
 * Return: On Success(Always 0)
 */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	d = n % 10;

	/* check boolean condition */
	if (d > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, d);
	}
	else if (d == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, d);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, d);
	}
	return (0);
}
