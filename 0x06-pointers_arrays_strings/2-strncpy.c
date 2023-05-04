#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: first input
 * @src: second input
 * @n: third input
 * Return: A pointer to the resulting string
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
