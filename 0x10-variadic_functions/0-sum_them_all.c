#include "variadic_functions.h"
#include <stdarg.h>

/**
* sum_them_all - Returns the sum of all its paramters.
*
* @n: The number of paramters passed to the function.
* @...: A variable number of paramters to calculate the sum of.
*
* Return: sum of all paramters or n == 0, return 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list x;

	unsigned int i, sum;

	va_start(x, n);

	sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(x, int);

	va_end(x);

	return (sum);

}
