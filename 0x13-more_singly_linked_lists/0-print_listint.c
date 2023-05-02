#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: is a pointer to the first node
 *
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
