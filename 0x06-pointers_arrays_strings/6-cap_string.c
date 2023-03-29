#include "main.h"
#include <stdio.h>

/**
 * isLower - checks if ascii is lowercase
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDel - checks if ascii is delimiter
 *
 * @c: character
 *
 * Return: 1 if true, 0 if false
*/

int isDel(char c)
{
	int i;
	char del[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == del[i])
			return (1);
	return (0);
}

/**
 * *cap_string - function that capitalizes all words of a string.
 *
 * @s: input for string
 *
 * Return: string with caps words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundDel = 1;

	while (*s)
	{
		if (isDel(*s))
			foundDel = 1;
		else if (isLower(*s) && foundDel)
		{
			*s -= 32;
			foundDel = 0;
		}
		else
			foundDel = 0;
		s++;
	}
	return (ptr);
}
