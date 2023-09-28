#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - function to check a char
 * @s: array to be checked
 * @accept: the char to be found
 * Return: the array s or NULL
**/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			return (s + i);
		}
	}
	return (NULL);
}
