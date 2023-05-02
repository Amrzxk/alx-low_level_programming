#include "lists.h"

/**
 * find_listint_loop - Finds the node where a loop starts in a linked list
 * @head: A pointer to the head of the linked list
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tortoise = head, *hare = head;

	while (hare && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (hare == tortoise)
		{
			tortoise = head;

			while (tortoise != hare)
			{
				tortoise = tortoise->next;
				hare = hare->next;
			}
			return (tortoise);
		}
	}
	return (NULL);
}
