#include<stdio.h>
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
	for (int i=0; i<n; i++)
	{
		char s[i] = b;
	}
	return (s);
}
