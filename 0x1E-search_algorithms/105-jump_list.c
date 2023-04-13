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
	listint_t *node, *jump;

	if (list == NULL || size == 0)
	{
		return (NULL);
	}

	x = 0;
	y = sqrt(size);

	for (node = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		node = jump;
		for (x += y; jump->index < x; jump = jump->next)
		{
			if (jump->index + 1 == size)
			{
				break;
			}
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);
	for (; node->index < jump->index && node->n < value; node = node->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	}
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	return (node->n == value ? node : NULL);
}
