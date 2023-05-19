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
	int j = 0;

	if (max < min)
		return (NULL);
	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
	{
		return (NULL);
	}
	else
	{
		while (min <= max)
		{
			a[j] = min;
			min++;
			j++;
		}
		return (a);
	}
}
