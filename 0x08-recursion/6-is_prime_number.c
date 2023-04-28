#include "main.h"

/**
 * find_prime - it checks if a number is prime
 * @t: target number
 * @i: iterative
 * Return: 1 if the number is prime, otherwise 0
 */

int find_prime(int t, int i)
{
	if (i == 1)
	{
		return (1);
	}
	else if (t % i == 0)
	{
		return (0);
	}
	return (find_prime(t, i / 2));
}

/**
 * is_prime_number - it returns 1 if it is a prime number, otherwise 0
 * @n: number to be checked
 * Return: 1 if n is prime, otherwise 0.
 */

int is_prime_number(int n)
{
	if (n < 0 || n == 1)
	{
		return (0);
	}
	return (find_prime(n, n / 2));
}
