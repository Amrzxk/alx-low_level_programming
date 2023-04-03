#include "main.h"

/**
 * *_memcpy - function that copies memory area.
 *
 * @dest: Area of memory
 * @src: Source
 * @n: The length to be copied
 *
 * Return: Pointer dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
