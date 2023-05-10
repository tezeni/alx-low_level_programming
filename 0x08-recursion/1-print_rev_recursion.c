#include "main.h"

/**
 * _print_rev_recursion - function to print string in reverse
 * @s: the string to be reversed
 * Return: void
**/

void _print_rev_recursion(char *s)
{
	_putchar(*s);
	s--;
	_print_rev_recursion(s);
}
