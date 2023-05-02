#include <stdio.h>

/**
 *_strlen - returns the length of string
 *@str : the string input
 *return : return length (success)
 */

int _strlen(const char *str)
{
	size_t	length	=	0;

	while (*str++)
	length++;
	return	(length);
}
