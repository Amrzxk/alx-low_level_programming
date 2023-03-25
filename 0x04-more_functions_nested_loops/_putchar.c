#include <stdio.h>
#include "main.h"

/**
 * _putchar - sends character c to stdout
 * @c: The character to print
 *
 * Return: On success prints 1.
 *         On error, -1 is returned, and errno is set appropiately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
