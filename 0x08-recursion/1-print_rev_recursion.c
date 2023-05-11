#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: the string to be reversed
 * Return: void
**/

void _print_rev_recursion(char *s)
{
	int _strlen_recursion(char *s);
	int len;

	len = _strlen_recursion(s);

	if (len < 0)
		return;
	_putchar(*(s + len));
	len--;
	_print_rev_recursion(s - 1);
}

/**
 * _strlen_recursion - function to count string length
 * @s: the string to be counted
 * Return: the length of the string
**/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
