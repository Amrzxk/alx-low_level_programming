#include "main.h"

/**
 * _isupper - checks if c is upper
 *
 * @c: input for given alphabet
 *
 * Return: 1 if upper, 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
