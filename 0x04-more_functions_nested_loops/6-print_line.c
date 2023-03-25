#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 *
 * @n: is the number of times the character _ should be printed
*/

void print_line(int n)
{
	int Length;

	if (n == 0)
		_putchar('\n');
	else
	{
		for (Length = 1; Length <= n; Length++)
			_putchar('_');
		_putchar('\n');
	}
}
