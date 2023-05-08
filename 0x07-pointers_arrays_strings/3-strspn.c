#include "main.h"
#include <stdio.h>

/**
 * _strspn - function to check a char
 * @s: array to be checked
 * @accept: the char to be found
 * Return: the array s or NULL
**/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, b, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		b = 0;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
				len++;
			b = 1;
		}
		if (b == 0)
			return (len);
	}
	return (len);
}
