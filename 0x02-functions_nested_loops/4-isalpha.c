#include "main.h"

/**
 * _isalpha - it checks for alphabetic character
 * Description: Write a function that checks for alphabetic character
 * @c: is the character to be checked
 * Return: 0 or it returns 1.
 */

int _isalpha(int c)
{
	if (('a' <= c && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
