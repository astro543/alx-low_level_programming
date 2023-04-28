#include "main.h"

/**
 * free_grid - it frees a 2d array
 * @grid: it is the memory block to be freed
 * @height: This is the height of the array
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
