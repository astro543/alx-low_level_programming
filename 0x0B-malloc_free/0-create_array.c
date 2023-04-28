#include "main.h"

/**
 * create_array - it creates an array of char initialized with specified char
 * @size: it is size of the array
 * @c: it is the specified char
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
