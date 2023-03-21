#include "main.h"
#include <stdio.h>

/**
 * times_table - It is the entry point
 * Description: Function prints the 9 times table
 * Return: 0
 */

void times_table(void)
{
	int row, col, rem, quo, prod;

	for (row = 0; row <= 9; row++)
	{
		for (col = 0; col <= 9; col++)
		{
			prod = row * col;
			if (prod <= 9)
			{
				if (col != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + prod);
			}
			else
			{
				quo = prod / 10;
				rem = prod % 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + quo);
				_putchar('0' + rem);
			}
		}
		_putchar('\n');
	}
}
