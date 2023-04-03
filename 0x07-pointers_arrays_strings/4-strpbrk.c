#include "main.h"

/**
 * *_strpbrk - function that searches a string for any of a set of bytes.
 *
 * @s: the string
 * @accept: equal of string
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
