#include "main.h"

/**
 * _abs - function that gets the absolute value of an integer.
 *
 * @n: Takes an integer type input for the function.
 *
 * Return: Always 0 (Success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
