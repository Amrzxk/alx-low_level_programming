#include "lists_h"

/**
 * _strlen - returns length of string
 * @s: the string to check
 *
 * Return: integer value of the length
*/

int _strlen(char *s)
{
        int l = 0;

        if (!s)
        {
                return (0);
        }
        while (*s++)
        {
                l++;
        }
        return (l);
}

/**
 * add_node - adds a new node at the beginning of a list
 * @head: is the address of pointer to head node
 * @str: string field of node
 *
 * Return: the address of the new element, or NULL if it failed
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (!new_node)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = _strlen(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
