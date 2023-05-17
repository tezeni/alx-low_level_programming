#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - initializes 2d array
 * @height: array size
 * @width: array size
 * Return: pointer to concatnated strings
**/
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j, k, l;

	a = malloc(height * sizeof(int *));

	if (a == 0)
	{
		free(a);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			a[i][j] = 0;
		}
	}
	return (a);
}
