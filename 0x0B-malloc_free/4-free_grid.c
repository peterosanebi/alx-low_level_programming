#include "main.h"
#include <stdlib.h>
/**
 * free_grid - main code block
 *
 * @grid: grid free
 * @height: grid height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == 0 || height == 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
