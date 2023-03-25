#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0 (Success)
*/

void more_numbers(void)
{
	int num, row, counter;

	for (row = 1; row <= 10; row++)
	{
		for (counter = 0; counter <= 14; counter++)
		{
			num = counter;
			if (count > 9)
			{
				_putchar(1 + 48);
				num = counter % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
