#include "main.h"

/**
 * _strlen_recursion - function to count string length
 * @s: the string to be counted
 * Return: the length of the string
**/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	len += len;
	s++;
	_strlen_recursion(s);
	return (len);
}
