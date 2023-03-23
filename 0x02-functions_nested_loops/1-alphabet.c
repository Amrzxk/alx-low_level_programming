#include "main.h"

/**
 * print_alphabet - makes use of the _putchar function to print the alphabet.
*/

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
