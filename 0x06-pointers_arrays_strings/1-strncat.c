#include "main.h"

/**
 * _strcat - concatinates two string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: A pointer to the resulting string
**/

char *_strcat(char *dest, char *src, int n)
{
	int dlen = 0;
	int i = 0;

	while (dest[i++])
	dlen++;
	for (i = 0; src[i] && i < 0; i++)
	dest[dlen++] = src[i];
	return (dest);
}
