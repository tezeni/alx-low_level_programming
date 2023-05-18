#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function to put an array
 * @max: maximum of num
 * @min: minimum of num
 * Return: NULL and on failure or pointer
**/

int *array_range(int min, int max)
{
	int *a;
	int i;

	if (max > min)
	{
		i = max - min;
		a = malloc(i + 1);

		if (a == NULL)
			return (NULL);
		return (a);
	}
	return (NULL);
}
