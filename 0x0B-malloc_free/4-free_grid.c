#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: variable that points to a 2d grid
 * @height: the size of the row
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
		free(grid);
	}
}
