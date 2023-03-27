#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generate a random password for file 101-crackme.
 *
 * Return: Zero (Success)
*/

int main(void)
{
	int sum;
	char c;

	srand(time(NULL));
	while (sum <= 2654)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	putchar(2772 - sum);
	return (0);
}
