#include <stdio.h>

/**
 * main - prints the number of arguments passed to the command line
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
