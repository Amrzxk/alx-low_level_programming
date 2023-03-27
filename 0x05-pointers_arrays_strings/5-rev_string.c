#include "main.h"

/**
 * rev_string - function that reverses a string.
 *
 * @s: string paramter input
*/

void rev_string(char *s)
{
	int l, i;
	char tmp;

	/* for loop to find string length without null char */
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* swap the string by looping to half the string */
	for (i = 0; i < 1 / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - 1 - i]; /* 1 because array starts from 0 */
		s[l - 1 - i] = tmp;
	}
}
