#include "main.h"

/**
 * factorial - it prints the factorials of a given number
 * @n: s the number to find its factorial
 *
 * Return: the factorial of the number are returned.
 */

int factorial(int n)
{
	if (n == 1 || n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
