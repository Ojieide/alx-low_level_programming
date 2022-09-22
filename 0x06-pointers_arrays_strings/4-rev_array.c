#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer of array int
 * @n: the number of elements to swap
 *
 * Return: nothing,
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int *str, *rev;
	int swp = 0;

	str = a;
	rev = a;
	n -= 1;
	while (i < n)
		i += 1;
	while (j <= i)
	{
		swp = *(str + j);
		*(str + j) = *(rev + i);
		*(rev + i) = swp;
		j++;
		i--;
	}
}
