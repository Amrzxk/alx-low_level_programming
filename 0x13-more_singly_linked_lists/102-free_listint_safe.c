#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely, avoiding loops
 * @h: Pointer to a pointer to the head of the list
 *
 * Return: The size of the list that was free'd
*/

size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *p1, *p2;

	if (h == NULL || *h == NULL)
		return (count);

	p1 = *h;
	p2 = (*h)->next;

	while (p2 != NULL && p2 < p1)
	{
		free(p1);
		count++;
		p1 = p2;
		p2 = p2->next;
	}
	free(p1);
	count++;

	if (p2 != NULL)
	{
		p1 = *h;
		while (p2 != p1)
		{
			p1 = p1->next;
			p2 = p2->next;
		}

		while (*h != p1)
		{
			free(*h);
			count++;
			*h = (*h)->next;
		}
		free(*h);
		count++;
		*h = NULL;
	}
	else
	{
		*h = NULL;
	}

	return (count);
}
