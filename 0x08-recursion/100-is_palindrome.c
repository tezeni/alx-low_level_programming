#include "main.h"
#include <string.h>

int check_palindrom(int l, char *s, int i);
int is_palindrome(char *s);
/**
 * is_palindrome - function to deside whether the function id palindrom or not.
 * @s: string to be checked for palindrom
 * Return: 1 if palindrom and 0 if not
**/

int is_palindrome(char *s)
{
	int l, i;

	i = 0;
	l = strlen(s);

	if (!(*s))
		return (1);
	return (check_palindrom(l, s, i));
}
/**
 * check_palindrom - function to check whether the function is palindrom or not
 * @s: string to be checked for palindrom
 * @l: string length
 * @i: string index
 * Return: 1 if palindrom and 0 if not
**/

int check_palindrom(int l, char *s, int i)
{
	if (s[i] == s[l / 2])
		return (1);
	if (s[i] == s[l - i - 1])
		return (check_palindrom(l, s, i + 1));

	return (0);
}

