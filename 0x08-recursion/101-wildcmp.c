#include "main.h"

/**
 * wildcmp - it compares if two strings are identical
 * @s1: string one
 * @s2: string two
 * Return: one if s1 is equal to s2, otherwise zero.
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == 0 && *s2 == 0)
	{
		return (1);
	}
	else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else if (*s1 == 0 && *(s2 + 1) != 0 && *s2 == '*')
	{
		return (0);
	}
	else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
