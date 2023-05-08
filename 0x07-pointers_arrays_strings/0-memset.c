#include "main.h"

/**
 * _memset - function to change the memory size
 * @s: array to change memset
 * @b: the caracter that replaces the mem
 * @n: number of characters to be changed
 * Return: the array modified s
**/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
