#include "search_algos.h"

/**
  * binary_search_sub - Searches for a value in a sorted array
  *			of integers using the Binary search algorithm.
  * @array: Pointer to the first element of the subrray to search in.
  * @start: Index of the start of the search in the subarray.
  * @end: Index of the end of the search in the subarray.
  * @value: Value to search for.
  *
  * Return: 1, If the value is not present in subarray or if subarray is NULL.
  *         Otherwise, the index where the value is located.
  */
int binary_search_sub(int *array, size_t start, size_t end, int value)
{
	size_t a;

	if (array == NULL)
	{
		return (-1);
	}

	while (end >= start)
	{
		printf("Searching in array: ");
		for (a = start; a < end; a++)
		{
			printf("%d, ", array[a]);
		}
		printf("%d\n", array[a]);

		a = start + (end - start) / 2;
		if (array[a] == value)
		{
			return (a);
		}
		if (array[a] > value)
		{
			end = a - 1;
		}
		else
		{
			start = a + 1;
		}
	}

	return (-1);
}
/**
  * exponential_search - Searches for a value in a sorted array of
  *			integers using the Exponential search algorithm.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Return: -1, If the value is not present in array or if array is NULL.
  *         Otherwise, the index where the value is located.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t x = 0, b;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (x = 1; x < size && array[x] <= value; x = x * 2)
			printf("Value checked array[%ld] = [%d]\n", x, array[x]);
	}

	b = x < size ? x : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", x / 2, b);
	return (binary_search_sub(array, x / 2, b, value));
}
