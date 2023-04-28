#include "lists.h"

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
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node
 *
 * Return: The size of the list
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
