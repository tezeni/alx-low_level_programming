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
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size <= new_size)
	{
		return (ptr);
	}
	else
	{
		ptr = malloc(new_size);
		return (ptr);
	}
}
