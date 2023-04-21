#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
* print_strings - Prints strings, followed by a new line.
*
* @separator: The string to be printed between strings.
* @n: The number of strings passed to the function.
* @...: A variable number of strings to be printed.
*
* Description: If separator is NULL it won't be printed.
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	char *p;
	unsigned int i;


	va_start(x, n);


	for (i = 0; i < n; i++)
	{
		p = va_arg(x, char *);

		if (p == NULL)
			printf("(nil)");
		else
			printf("%s", p);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(x);
}
