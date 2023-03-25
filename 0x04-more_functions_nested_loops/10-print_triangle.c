#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 *
 * @size: is the size of the triangle
 *
 * Return: Always 0 (Success)
*/

void print_triangle(int size)
{
	int height, base;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (height = 1; height <= size; height++)
		{
			for (base = 1; base <= size; base++)
			{
				if ((height + base) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
