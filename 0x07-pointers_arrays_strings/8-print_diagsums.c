#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two 
 * diagonals of a square matrix of integers
 * @a: the square matrix of integers
 * @size: size of the square matrix of integers
 *
 * Return: nothing.
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int s1, s2;

	s1 = s2 = 0;
	while (i < (size * size))
	{
		j = *(a + i);
		s1 = s1 + j;
		i = i + size + 1;
	}
	i = size - 1;
	while (i < ((size * size) - 1))
	{
		j = *(a + i);
		s2 = s2 + j;
		i = i + (size - 1);
	}
	printf("%d, %d\n", s1, s2);
}
