#include "main.h"
#include <stdio.h>

/**
 * _memcpy - Entry point
 * @dest: pointed destination
 * @src: constant byte
 * @n: bytes
 * Return: Always dest (Success)
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
