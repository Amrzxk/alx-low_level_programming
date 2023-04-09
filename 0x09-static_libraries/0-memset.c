#include "main.h"

/**
 * *_memset - function that fills memory with a constant byte.
 *
 * @s: pointer for constant
 * @b: the constant
 * @n: maximum bytes to use
 *
 * Return: s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int memo;

	for (memo = 0; n > 0; memo++, n--)
		s[memo] = b;

	return (s);
}
