#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 *
 * @argc: number of arguements
 * @argv: array of arguements
 *
 * Return: 0
*/

int main(int argc, const char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
