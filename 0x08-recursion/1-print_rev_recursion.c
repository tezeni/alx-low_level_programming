#include "main.h"
#include <string.h>

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: the string to be reversed
 * Return: void
**/

void _print_rev_recursion(char *s)
{
	int strlen(const char *str);
	int len;

	len = strlen(s);

	if (len < 0)
		return;
	_putchar(*(s + len));
	len--;
	_print_rev_recursion(s - 1);
}
