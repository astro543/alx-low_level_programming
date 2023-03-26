#include "main.h"

/**
 * _isdigit - It is a function that verifies if a character is a digit or not
 * @c: tested character
 * Return: 1 or 0
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
