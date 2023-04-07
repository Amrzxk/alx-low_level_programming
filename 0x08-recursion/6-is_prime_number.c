#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if num is a prime num
 *
 * @n: integer
 * @z: integer
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
*/

int if_prime(int n, int z);

int is_prime_number(int n)
{
	return (if_prime(n, 2));
}

/**
 * if_prime - check if all numbers < n can be divided by it
 *
 * @n: integer
 * @z: integer
 *
 * Return: integer
*/

int if_prime(int n, int z)
{
	if (z >= n && n > 1)
		return (1);
	else if (n % z == 0 || n <= 1)
		return (0);
	else
		return (if_prime(n, z + 1));
}
