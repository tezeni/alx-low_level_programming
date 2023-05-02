#include <stdio.h>
#include <string.h>

/**
 * * _strlen - returns the length of string
 *  *
 *   * @str : the string input
 *    *
 *     * return : length
**/

int _strlen(const char *str)
{
	size_t	length	=	0;

	while (*str++)
	length++;
	return	(length);

}
