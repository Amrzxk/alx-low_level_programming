#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 *
 * @argc: is the number of command line arguments.
 * @argv: is a pointer to the array of command line arguemnts.
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	void(argv);

	printf("%d\n", argc - 1);

	return (0);
}
