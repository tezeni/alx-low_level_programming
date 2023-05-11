#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: the string to be reversed
 * Return: void
**/

void _print_rev_recursion(char *s)
{
	int _strlen(char *s);
	int len;

	len = _strlen(s);

	if (len < 0)
		return;
	_putchar(*(s + len));
	len--;
	_print_rev_recursion(s - 1);
}

/**
 * _strlen - counts the length of the string
 * @s: the string to be counted
 * Return: int
**/


int _strlen(char *s)
{
	int length = 0;

	if (*s == 0)
		return (length);
	length++;
	_strlen(s + 1);
	return (length);
}
