#include "search_algos.h"

/**
 * jump_list - Searches for a value in a sorted list of
 *		integers using the Jump search algorithm.
 * @list: Pointer to the head of the list to search in.
 * @size: Number of nodes in list.
 * @value: Value to search for.
 *
 * Return: NULL, If value is not present in head or if head is NULL.
 *         Otherwise, a pointer to the first node where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t x, y;
	listint_t *a, *b;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	x = 0;
	y = sqrt(size);

	for (a = b = list; b->index + 1 < size && b->n < value;)
	{
		a = b;
		for (x += y; b->index < x; b = b->next)
		{
			if (b->index + 1 == size)
			{
				break;
			}
		}
		printf("Value checked at index [%ld] = [%d]\n", b->index, b->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			a->index, b->index);
	for (; a->index < b->index && a->n < value; a = a->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);
	}
	printf("Value checked at index [%ld] = [%d]\n", a->index, a->n);
	return (a->n == value ? a : NULL);
}
