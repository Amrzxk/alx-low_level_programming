#include "main.h"

/**
 * print_sign - prints + if n > than 0, 0 if n is zero, -1 if n < than 0.
 *
 * @n: Takes integer type input for the function
 *
 * Return: 1 if +, 0 if 0, and -1 if -.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}

	return (-2);
}
