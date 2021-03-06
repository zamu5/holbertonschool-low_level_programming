#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - returns a pointer to 2 dimensional array of integers.
 * @grid: declaration
 * @height: declaration
 * Return:a pointer to a new string.
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(*(grid + x));
	free(grid);
}
