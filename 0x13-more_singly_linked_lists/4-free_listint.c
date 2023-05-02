#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 *
 * @head: A pointer to the head node of the list.
 */
void free_listint(listint_t *head)
{
	listint_t *current_node;

	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
