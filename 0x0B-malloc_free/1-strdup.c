#include "main.h"

/**
 * _strdup - it returns a pointer to a newly allocated space in memory
 * whick contains a copy of the str given as a parameter.
 * @str: it is a copy of the str
 * Return: pointer with the new space in memory.
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}
	arr = malloc(sizeof(*str) * strlen(str) + 1);
	if (arr == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}
