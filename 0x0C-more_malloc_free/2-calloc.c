#include "main.h"

/**
 * _memset - function that fills memory
 *
 * @s: pointer for constant
 * @b: the constant
 * @n: maximum bytes to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
		*s++ = b;
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
	void *p;

	if (size == 0 || nmemb == 0)
		return (NULL);

	p = malloc(sizeof(int) * nmemb);

	if (p == 0)
		return (NULL);

	_memset(p, 0, sizeof(int) * nmemb);

	return (p);
}
