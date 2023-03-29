#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements it swaps
*/

void reverse_array(int *a, int n)
{
	int i, j, q;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		q = a[i];
		a[i] = a[j];
		a[j] = q;
	}
}
