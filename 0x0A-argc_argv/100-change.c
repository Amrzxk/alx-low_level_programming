#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arguements
 * @argv: array of arguments
 *
 * Return: 0
*/

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int Lcents = 0, m = atoi(argv[1]), i;
		int cents[] = {25, 10, 5, 2, 1};

		for (i = 0; i < 5; i++)
		{
			if (m >= cents[i])
			{
				Lcents += m / cents[i];
				m %= cents[i];

				if (m % cents[i] == 0)
					break;
			}
		}
		printf("%d\n", Lcents);
	}
	else
		return (printf("Error\n"), 1);

	return (0);
}
