#include "main.h"
/**
 * _puts_recursion - It prints a string followed by a new line
 * @s: It is the character to be printed
 * The Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
