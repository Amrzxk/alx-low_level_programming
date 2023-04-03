#include "main.h"

/**
 * *_strstr - function that locates a substring.
 *
 * @haystack: is a pointer to the null-terminated string that is being searched
 * for the occurrence of the needle substring.
 *
 * @needle: is a pointer to the null-terminated string that is the
 * substring beingsearched for within the haystack string.
 *
 * Return: pointer to the first occurrence of the
 * needle substring in the haystack string.
*/

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	p1 = haystack;
	p2 = needle;

	while (*p1 != '\0')
	{
		p3 = p1;
		while (*p2 == *p3 && *p2 != '\0')
		{
			p2++;
			p3++;
		}

		if (*p2 == '\0')
		{
			return (p1);
		}
		p2 = needle;
		p1++;
	}

return (NULL);
}
