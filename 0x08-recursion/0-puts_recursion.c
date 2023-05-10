#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function to do string recursion
 * @s: input string
 * Return: void
**/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	 _putchar(*s);
	 s++;
	 _puts_recursion(s);
}
