#include "function_pointers.h"

/**
 * array_iterator - function to iterate the given array
 * @array: given array
 * @size: size of the array
 * @action: pointer to the given function
 *
 * Return: void
**/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
	else
		exit();
}
