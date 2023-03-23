#include "main.h"

/**
 * _islower - function that checks if character is lowercase
 *
 * @c: Checks input
 *
 * Return: Returns 1 if `c` is lowercase
 *         otherwise always 0 (Success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
