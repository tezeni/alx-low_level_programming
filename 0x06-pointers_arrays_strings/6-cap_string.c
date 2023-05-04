#include "main.h"

/**
 * cap_string - a string to uppercase
 * @s: input
 * Return: the pointer string s
**/

char *cap_string(char *s)
{
	int j = 0, i;
	int spcc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[j])
	{
		i = 0;

		while (i < spcc)
		{
			if ((j == 0 || s[j - 1] == spc[i]) && (s[j] >= 97 && s[j] <= 122))
				s[j] -= 32;
			i++;
		}
		j++;
	}

	return (s);
}
