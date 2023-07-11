#include "search_algos.h"

int binary_search_recursion(int *array, int value,
			    size_t low, size_t high);

/**
 * binary_search_recursion - recursively searches for a value in a sorted array of integers
 * @array: pointer to first element of array to search
 * @value: value to search for
 * @low: starting index in array
 * @high: ending index in array
 *
 * Return: the index where the value is located.
 *	-1, If the value is not present.
 */
int binary_search_recursion(int *array, int value,
			    size_t low, size_t high)
{
	size_t mid, x;

	if (!array)
		return (-1);

	mid = (low + high) / 2;
	printf("Searching in array: ");
	for (x = low; x <= high; x++)
		printf("%i%s", array[x], x == high ? "\n" : ", ");

	if (array[low] == value)
		return ((int)low);

	if (array[low] != array[high])
	{
		if (array[mid] < value)
			return (binary_search_recursion(array, value,
							mid + 1, high));
		if (array[mid] >= value)
			return (binary_search_recursion(array, value,
							low, mid));
	}

	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 *		and returns the index of the first value in the array 
 *		(if this value appears more than once in the array)
 *		using a binary search algorithm
 * @array: pointer to first element of array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the index where value is located.
 *	-1, If value is not present in array or if array is NULL.
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;

	if (!array)
		return (-1);

	return (binary_search_recursion(array, value, low, high));
}
