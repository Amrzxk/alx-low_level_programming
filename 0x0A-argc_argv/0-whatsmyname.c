#include <stdio.h>

/**
 * main - a program that prints its name, followed by a new line.
 *
 * @argc: integer
 * @argv: array of varaible
 *
 * Return: Always 0 (Success)
*/

int main(int argc, const char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);

	return (0);
}
