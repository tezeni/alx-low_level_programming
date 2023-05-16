#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates array of character
 * @size: size of the array to be created
 * @c: the character to initialize the array with
 * Return: NULL if size is 0 and pointer to the array if not
**/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int j;

	a = malloc(size * sizeof(char));

	if (a == 0)
		return (NULL);
	for (j = 1; j <= size; j++)
	{
		a[j] = c;
	}
	return (a);
}
