#include "main.h"

/**
 * factorial - Calc the factorial of a number
 *
 * @n: integer
 *
 * Return: int (factorial of num)
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
