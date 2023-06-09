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

	if (width <= 0 || height <= 0)
		return (NULL);
	a = (int **) malloc(height * sizeof(int *));

	if (a == NULL)
	{
		return (NULL);
	}

	for (k = 0; k < height; k++)
	{
		a[k] = (int *) malloc(width * sizeof(int));
		if (a[k] == NULL)
		{
			for (l = k; l >= 0; l--)
			{
				free(a[l]);
			}
			free(a);
			return (NULL);
		}
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
