#include "main.h"

/**
 * _strlen_recursion - Returnd the length of a string
 * @s: Is the pointer to the  string to be measured
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}
