#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list, even if it has a loop
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise, *hare;

	tortoise = head;
	hare = head;
	while (hare != NULL && hare->next != NULL)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;
		if (hare == tortoise)
		{
			printf("-> [%p] %d\n", (void *)hare, hare->n);
			count++;
			break;
		}
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;
	}
	if (hare == NULL || hare->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	return (count);
}
