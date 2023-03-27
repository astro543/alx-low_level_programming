#include "main.h"

/**
 * print_array - It prints n element of array
 * @a: It is an array
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n ; inc++)
	{
		if (inc != n - 1)
			printf("%d, ", a[inc]);
		else
			printf("%d", a[inc]);

	}
	printf("\n");
}
