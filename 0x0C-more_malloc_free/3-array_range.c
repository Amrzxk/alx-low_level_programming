#include "main.h"

/**
 * array_range - function that creates an array of integers.
 *
 * @min: start
 * @max: maximum
 *
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int len, i, *p;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	p = malloc(sizeof(int) * len);

	if (!p)
		return (NULL);

	for (i = 0; i < len; i++)
		p[i] = min++;

	return (p);
}
