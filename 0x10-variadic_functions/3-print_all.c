#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything
*
* @format: is a list of types of arguments passed to the function
*/

void print_all(const char * const format, ...)
{
	int i = 0;
	char *p, *s = "";
	va_list x;

	va_start(x, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(x, int));
						break;
				case 'i':
					printf("%s%d", s, va_arg(x, int));
						break;
				case 'f':
					printf("%s%f", s, va_arg(x, double));
						break;
				case 's':
					p = va_arg(x, char *);

					if (!p)
					{
						p = "(nil)";
					}
					printf("%s%s", s, p);
						break;
				default:
					i++;
						continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(x);
}
