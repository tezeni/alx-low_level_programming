#include "main.h"

/**
 * _strcmp - copies a string
 * @s1: first input
 * @s2: second input
 * Return: A pointer to the resulting string
**/

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s2 - *s1);
}
