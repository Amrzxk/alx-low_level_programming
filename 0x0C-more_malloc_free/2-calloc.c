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

void *_memset(void *s, int c, unsigned int n)
{
	unsigned char *p = s;
	unsigned char uc = (unsigned char) c;

	while (n--)
	*p++ = uc;

	return (s);
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
	if (size == 0 || nmemb == 0)
		return (NULL);

	void *p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	_memset(p, 0, nmemb * size);

	return (p);
}
