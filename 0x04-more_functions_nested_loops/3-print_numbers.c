#include "main.h"
#include <stdio.h>

/**
 * print_numbers - It prints all the numbers from 0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	int number = 48;

	for (number = 48; number < 58; number++)
	{
		_putchar(number);
	}
	_putchar(10);
}
