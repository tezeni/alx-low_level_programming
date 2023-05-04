#include "main.h"

/**
 * string_toupper - a string to uppercase
 * @str: input
 * Return: the pointer string str
**/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
	if (str[i] >= 'a' && str[i] <= 'z')
	str[i] -= 32;
	i++;
	}
	return (str);

}
