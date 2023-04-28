#include "main.h"

/**
 * argstostr - it concatenates all the arguments in a program
 * @ac: this is the argument count
 * @av: it is the argument vector
 * Return: pointer to a string
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int size = 0;
	int index = 0;
	char *arr;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			size++;
		}
		size++;
	}
	arr = malloc(sizeof(char) * size + 1);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[index] = av[i][j];
			index++;
		}
		if (arr[index] == '\0')
		{
			arr[index++] = '\n';
		}
	}
	return (arr);
}
