#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 *
 * @array: the int (num) of array
 * @size: the size of array
 * @cmp: function to compare
 *
 * Return: index of searched integer
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int itr = 0;

	if (array && size && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);
			}
			i++;
		}
	}
	return (-1);
}
