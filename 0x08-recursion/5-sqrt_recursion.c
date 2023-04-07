#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: integer
 * @val: square root
 *
 * Return: integer (sqaure root of num)
*/

int square_root(int n, int val);

int _sqrt_recursion(int n)
{
	return (square_root(n, 1));
}

/**
 * square_root - Gets the square root.
 *
 * @n: integer
 * @val: square root
 *
 * Return: integer (square root)
*/

int square_root(int n, int val)
{
	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (square_root(n, val + 1));
	else
		return (-1);
}
