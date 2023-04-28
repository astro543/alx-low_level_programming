#include "main.h"
/**
 * _strlen_recursion - it gives the length of a string
 * @s: Is the string to be measured
 * The Return: length of the string
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
