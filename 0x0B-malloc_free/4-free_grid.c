#include <stdlib.h>

/**
 * free_grid -alloc_grid
 * @grid: pointer arrays
 * @height: arrays
 * Return: void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}
