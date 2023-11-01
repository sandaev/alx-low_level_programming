#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees Array
 * @grid: Pointer to 2D array
 * @height: The height of array
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);
	free(grid);
}
