#include "main.h"
/**
 * _memset - function that sets a block of memory to a specific value
 *
 * @s: pointer to constant
 * @c: represents the value to be set
 * @n: maximum bytes to use
 *
 * Return: Pointer
*/

void *_memset(char *s, char c, unsigned int n)
{
	char *p = s

	while (n--)
	{
		*s++ = c;
	}
	return (p);
}

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: array length
 * @size: size of elements
 *
 * Return: Pointer
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
