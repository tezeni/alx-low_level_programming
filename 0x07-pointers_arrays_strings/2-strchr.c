#include"main.h"
#include<stdio.h>

/**
 * _strchr - function to check a char
 * @s: array to be checked
 * @c: the char to be found
 * Return: the array s or NULL
**/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
