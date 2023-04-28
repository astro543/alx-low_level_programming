#include "main.h"

/**
 * malloc_checked - it allocates memory using malloc
 * @b: this is the number of bytes to be allocated in memory
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *arr;

	arr = malloc(b);
	if (!arr)
	{
		exit(98);
	}

	return (arr);
}
