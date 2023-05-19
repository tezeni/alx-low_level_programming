#include "main.h"
#include <string.h>

int strlen_no_wilds(char *str);
char *_match(char *str1, char *str2);
int wildcmp(char *s1, char *s2);
void _wild(char **wstr);

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
		s2 = _match(s1, s2);
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
	if (**wstr == '*')
	{
		(*wstr)++;
		_wild(wstr);
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
	int str1_len = strlen_no_wilds(str1) - 1;
	int str2_len = strlen_no_wilds(str2) - 1;

	if (*str2 == '*')
		_wild(&str2);

	if (*(str1 + str1_len - str2_len) == *str2 && *str2 != '\0')
	{
		str2++;
		return (_match(str1, str2));
	}

	return (str2);
}

/**
 * strlen_no_wilds - function to count string length excluding wildcard
 * @str: given string
 * Return: string lenx excluding wildcard chars
**/

int strlen_no_wilds(char *str)
{
	int l = 0;
	int i = 0;

	if (*(str + i))
	{
		if (*str != '*')
			l++;

		i++;
		l += strlen_no_wilds(str + i);
	}
	return (l);
}
