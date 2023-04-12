#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: is a String
 *
 * Return: 0
*/

char *_strdup(char *str)
{
	int i = 0;
	int size = 0;
	char *p;

	if (str == NULL)
		return (NULL);

	for (; str[size] != '\0'; size++)
	;
	p = malloc(size * sizeof(*str) + 1);

	if (p == 0)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			p[i] = str[i];
	}
	return (p);
}
