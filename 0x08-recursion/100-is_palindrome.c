#include "main.h"
#include <string.h>

/**
 * compare_chars - it checks if two chars are equal
 * @s: string to be checked
 * @i: char 1.
 * @j: char 2.
 * Return: 1 if equal, otherwise 0.
 */

int compare_chars(char *s, int i, int j)
{
	if (i == j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	if (i < j + 1)
	{
		return (compare_chars(s, i + 1, j - 1));
	}
	return (1);
}

/**
 * is_palindrome - it checks if a str is a palindrome
 * @s: string to be checked
 * Return: 1 if str is palindrome, otherwise 0.
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len == 0)
	{
		return (1);
	}
	return (compare_chars(s, 0, len - 1));
}
