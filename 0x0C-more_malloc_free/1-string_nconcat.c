#include "main.h"
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings.
 *
 * @s1: First string
 * @s2: Second String
 * @n: bytes of s2 to concatenate
 *
 * Return:  pointer to a newly allocated space in memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j;
	unsigned int s1_len, s2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
	;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
	;

	str = malloc(s1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
	{
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}
