#include<stdio.h>
#include<stdlib.h>
#include"main.h"

/**
 * strnlen - function to return the length of a string
 * @s: input string
 * Return: String length
**/
unsigned int strnlen(const char *s)
{
	int l = 0;

	while (s[l])
		l++;
	return (l);
}

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: The binary string to converts
 * Return: positive number conerted from binary
**/
unsigned int binary_to_uint(const char *b)
{
	unsigned int l = 0, c = 0, s = 0;

	if (b == NULL)
		return (0);

	l = strnlen(b);

	while (l--)
	{
		if (b[l] != 48 && b[l] != 49)
			return (0);
		if (b[l] == 49)
			s += 1 << c;
		c++;
	}
	return (s);
}
