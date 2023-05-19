#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function to concatenate strings
 * @size: size of the type
 * @nmemb: string number
 * Return: NULL and on failure or pointer
**/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *a;
	int i = 0;

	a = malloc(nmemb * size);

	if (nmemb == 0 || size == 0)
		return (NULL);
	if (a == NULL)
		return (NULL);
	while (i < (nmemb * size))
	{
		p[i] = 0;
		i++;
	}
	return (a);
}
