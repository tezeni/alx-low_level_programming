#include "main.h"

/**
 * _strcat - concatinates two string
 * @dest: first input
 * @src: second input
 * Return: A pointer to the resulting string
**/

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int i;

	while (dest[dlen])
	{
		dlen++;
	}
	for (i =0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
