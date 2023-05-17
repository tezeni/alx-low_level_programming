#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - initializes 2d array
 * @height: array size
 * @grid: array
 * Return: pointer to concatnated strings
**/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
