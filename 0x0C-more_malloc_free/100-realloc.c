#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function to reallocate size
 * @ptr: pointer to reallocate
 * @old_size: older size of the ptr
 * @new_size: newer size of ptr
 * Return: NULL and on failure or pointer
**/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);
	if (ptr == NULL)
	{
		a = malloc(new_size);

		if (a == NULL)
			return (NULL);
		return (a);
	}
	else
	{
		if (new_size == 0)
		{
			free(ptr);
			return (NULL);
		}
	}
	a = malloc(new_size);

	if (a == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		a[i] = ((char *) ptr)[i];
		i++;
	}
	free(ptr);
	return (a);
}
