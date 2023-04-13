#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 * @list: Pointer to the head of the skip list to search in.
 * @value: Value to search for.
 *
 * Return: NULL, If value is not present in list or if head is NULL.
 *         Otherwise, a pointer to the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *x, *y;

	if (list == NULL)
	{
		return (NULL);
	}

	for (x = y = list; y->next != NULL && y->n < value;)
	{
		x = y;
		if (y->express != NULL)
		{
			y = y->express;
			printf("Value checked at index [%ld] = [%d]\n",
					y->index, y->n);
		}
		else
		{
			while (y->next != NULL)
				y = y->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			x->index, y->index);

	for (; x->index < y->index && x->n < value; x = x->next)
		printf("Value checked at index [%ld] = [%d]\n", x->index, x->n);
	printf("Value checked at index [%ld] = [%d]\n", x->index, x->n);

	return (x->n == value ? x : NULL);
}
