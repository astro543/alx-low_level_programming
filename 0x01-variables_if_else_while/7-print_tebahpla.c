#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - No Entry point
 *In  Return: Always 0
 */

int main(void)
{
	char low;
	low = 'z';
	while (low >= 'a')
	{
		putchar(low);
		low--;
	}
	putchar('\n');

	return (0);
}
