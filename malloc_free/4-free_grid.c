#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: ptr to ptr of int
 * @height: int
 * Return: Always 0 (Success)
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL)
			free(grid[i]);
	}

	free(grid);
}
