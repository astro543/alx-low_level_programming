#include "main.h"

/**
 * print_square - prints a square
 * @size: parameter
 * Return: void
 */

void print_square(int size)
{
	int j, k;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (k = 0; k < (size - 1); k++)
				_putchar('#');

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
