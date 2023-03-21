#include "main.h"

/**
 * _islower - checks if a character is lowercase
 *
 * @i: the character to be checked
 *
 * Return: 0 or 1.
 */

int _islower(int i)
{
	if (i >= 'a' && i <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
