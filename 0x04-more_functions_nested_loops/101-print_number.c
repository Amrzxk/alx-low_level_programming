#include "main.h"

/**
 * print_number - Prints a number
 *
 * @n: Input for the integer to be printed
*/

void print_number(int n)
{
	unsigned int num = n;

	/* Check if negative (-) */
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	/* Print first digits */
	if ((num / 10) > 0)
		print_number(num / 10);

	/* Print the last digit */
	_putchar((num % 10) + 48);
}
