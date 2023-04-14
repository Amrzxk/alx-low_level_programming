#include "main.h"

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

	p = malloc(nmemb * size);

	if (p == NULL)
		return (NULL);

	char *ptr = (char *)p;
	unsigned int i;

	for (i = 0; i < nmemb * size; i++)
		*ptr++ = 0;


	return (ptr);
}
