#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1, *n2;

	if (head == NULL || head->next == NULL)
		return (NULL);

	n1 = head->next;
	n2 = (head->next)->next;

	while (n2)
	{
		if (n1 == n2)
		{
			n1 = head;

			while (n1 != n2)
			{
				n1 = n1->next;
				n2 = n2->next;
			}

			return (n1);
		}

		n1 = n1->next;
		n2 = (n2->next)->next;
	}

	return (NULL);
}
