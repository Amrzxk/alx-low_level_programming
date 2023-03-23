#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times.
*/

void print_alphabet_x10(void)
{
	int line, i;

	for (line = 0; line < 9; line++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}
}
