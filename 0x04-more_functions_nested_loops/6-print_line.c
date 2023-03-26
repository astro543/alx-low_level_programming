#include "main.h"

/**
 * print_line - It prints a straight line
 * @n: It is parameter
 * Return: void
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
