#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *n1, *n2;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	n1 = head->next;
	n2 = (head->next)->next;

	while (n2)
	{
		if (n1 == n2)
		{
			n1 = head;
			while (n1 != n2)
			{
				nodes++;
				n1 = n1->next;
				n2 = n2->next;
			}

			n1 = n1->next;
			while (n1 != n2)
			{
				nodes++;
				n1 = n1->next;
			}

			return (nodes);
		}

		n1 = n1->next;
		n2 = (n2->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}
