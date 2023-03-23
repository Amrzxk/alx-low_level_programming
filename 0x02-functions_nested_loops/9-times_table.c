#include "main.h"

/**
 * times_table - prints out the 9 times table
 *
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			/*
			 * put space if prod is a single number
			 * place first digit if its two numbers
			*/

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48); /*Gets the first digit*/

			_putchar((prod % 10) + 48); /*Gets the second digit*/
		}
		_putchar('\n');
	}
}
