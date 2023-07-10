#include "main.h"

/**
 * free_grid - Frees the memory allocated for a 2D grid
 * @grid: The 2D grid to be freed
 * @height: The height of the grid
 *
 * Description: This function frees the memory allocated for a 2D
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
