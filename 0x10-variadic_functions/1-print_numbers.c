#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers - prints numbers.
*
* @separator: The string that seprates numbers.
* @n: The number of integers.
* @...: variable number of numbers to be printed.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);


	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(x, int));
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(x);
}
