#include "main.h"

/**
 * _isdigit - sees if input is a digit between 0 and 9
 *
 * @c: is the input
 *
 * Return: 1 if its a digit, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
