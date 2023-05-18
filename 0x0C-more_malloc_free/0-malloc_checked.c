#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function to allocate memory
 * @b: size
 * Return: 98 and on failure or pointer
**/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
