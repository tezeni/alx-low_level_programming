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
	int j;

	if (max > min)
	{
		i = max - min;
		a = malloc(i);

		if (a == NULL)
		{
			return (NULL);
		}
		else
		{
			for (j = 0; j < i; j++)
			{
				a[j] = min;
				min++;
			}
			return (a);
	}
	return (NULL);
}
