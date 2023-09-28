#include "main.h"

/**
 * _strncat - concatinates two string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: A pointer to the resulting string
**/

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[i++])
	dlen++;
	for (i = 0; src[i] && i < n; i++)
	dest[dlen++] = src[i];
	return (dest);
}
