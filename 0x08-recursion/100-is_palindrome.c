#include "main.h"

/**
 * _index - returns last index of string including null
 *
 * @s: pointer of string
 *
 * Return: integer
*/

int is_palindrome(char *s);
int checker(char *s, int start, int end, int mod);

int _index(char *s)
{
	int n = 0;

	if (*s > '\0')
		n += _index(s + 1) + 1;
	return (n);
}

/**
 * is_palindrome - function that checks if string is palindrome
 *
 * @s: string to check
 *
 * Return: 0 or 1
*/

int is_palindrome(char *s)
{
	int end = _index(s);

	return (checker(s, 0, end - 1, end % 2));
}

/**
 * checker - checks for the palindrome
 *
 * @s: string
 * @start: moves int from right to left
 * @end: moved int from left to right
 * @mod: int
 *
 * Return: 0 or 1
*/

int checker(char *s, int start, int end, int mod)
{
	if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
		return (1);
	else if (s[start] != s[end])
		return (0);
	else
		return (checker(s, start + 1, end - 1, mod));
}
