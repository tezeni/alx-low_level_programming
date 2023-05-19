#include "main.h"
#include <string.h>

/**
 * wildcmp - function to check strings are identical
 * @s1: first string
 * @s2: second string
 * Return: 1 if identical and 0 if not
**/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

/**
 * _wild - function to iterate the given string until finding wildcard
 * @wstr: given string
 * Return: void
**/

void _wild(char **wstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		_wild(wildstr);
	}
}

/**
 * _match - function to match strings are identical
 * @str1: first string
 * @str2: second string
 * Return: str2 with null at the end if identical
**/

char *_match(char *str1, char *str2)
{
	int str1_len = strlen(str1) - 1;
	int str2_len = strlen(str2) - 1;

	if (*str2 == '*')
		_wild(&str2);

	if (*(str1 + str1_len - str2_len) == *str2 && *str2 != '\0')
	{
		str2++;
		return (_match(str1, str2));
	}

	return (str2);
}
