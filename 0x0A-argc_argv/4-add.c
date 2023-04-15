#include <stdio.h>
#include <stdlib.h>

/**
 * main -  a program that adds positive numbers.
 *
 * @argc: number of arguments.
 * @argv: array of arguments.
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	int add;
	char *p;

	add = 0;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < '0' || *p > '9')
				return (printf("Error\n"), 1);
		add += atoi(argv[argc]);
	}
	printf("%d\n", add);

	return (0);
}
