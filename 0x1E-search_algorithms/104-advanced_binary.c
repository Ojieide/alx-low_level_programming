#include "search_algos.h"

/**
  * advanced_binary_recursion - Searches recursively for a value in a sorted
  *                             array of integers using the Binary search
  *                             algorithm.
  * @array: Pointer to the first element of the subrray to search in.
  * @start: Index of the start of the search in the subarray.
  * @end: Index of the end of the search in the subarray.
  * @value: Value to search for.
  *
  * Return: -1, If the value is not present in subarray or if subarray is NULL.
  *         Otherwise, the index where the value is located.
  */
int advanced_binary_recursion(int *array, size_t start, size_t end, int value)
{
	size_t a;

	if (end < start)
		return (-1);

	printf("Searching in array: ");
	for (a = start; a < end; a++)
		printf("%d, ", array[a]);
	printf("%d\n", array[a]);

	a = start + (end - start) / 2;
	if (array[a] == value && (a == start || array[a - 1] != value))
		return (a);
	if (array[a] >= value)
		return (advanced_binary_recursion(array, start, a, value));
	return (advanced_binary_recursion(array, a + 1, end, value));
}

/**
  * advanced_binary - Searches for a value in a sorted array
  *					of integers using advanced Binary search algorithm.
  * @array: Pointer to the first element of the array to search in.
  * @size: Number of elements in array.
  * @value: Value to search for.
  *
  * Description: Returns the index of the first value in the array
  *             (if this value appears more than once in the array).
  * Return: -1, If the value is not present in array or if array is NULL.
  *         Otherwise, the first index where the value is located.
  */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursion(array, 0, size - 1, value));
}
