#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array.
 *
 * @array: the int (num) array
 * @size: the size of array
 * @action: the pointer to the function
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *end_of_arr = array + size - 1;

	if (array && size && action)
	{
		while (array <= end_of_arr)
			action(*array++);
	}
}
