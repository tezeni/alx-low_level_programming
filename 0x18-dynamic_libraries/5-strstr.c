#include "main.h"
#include <stdio.h>

/**
 * _strstr - function to check a char
 * @haystack: array to be checked
 * @needle: the char to be found
 * Return: the array s or NULL
**/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (NULL);
}
