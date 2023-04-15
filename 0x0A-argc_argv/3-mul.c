#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers.
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: if 0 success, else fail or 1 for (error)
*/

int main(int argc, char **argv)
{
	int prod;

	if (argc == 3)
	{
		prod = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", prod);
	}
	else
	{
		printf("Error\n");

		return (1);
	}
	return (0);
}
