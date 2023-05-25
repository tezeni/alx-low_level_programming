#include "function_pointers.h"

/**
 * int_index - function to return the index
 * @array: the input array
 * @size: the array size
 * @cmp: the pointer to function we compared the array to
 *
 * Return: the index or -1 if not meet the conditions
**/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && cmp != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (array[i] == cmp(elem))
				return (i);
			else
				return (-1);
		}
	}
	return (-1);
}
