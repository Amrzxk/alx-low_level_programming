#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc.
 *
 * @b: unsigned int
 *
 * Return: pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	*p = malloc(b);

	if (p == 0)
		exit(98);

	return (p);
}
