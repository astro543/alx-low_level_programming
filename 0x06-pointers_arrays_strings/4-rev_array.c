#include "main.h"

/**
 * reverse_array - reverses an array integers
 * @a: array to be reversed
 * @n: number of elements to be reversed
 */

void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < (n / 2); i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
