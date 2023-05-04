#include "main.h"

/**
 * leet - a string to encode 1337
 * @s: input
 * Return: the pointer string s
**/

char *leet(char *s)
{
	int i = 0, j = 0, k = 5;
	char m[5] = {'a', 'e', 'o', 't', 'l'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[i])
	{
		j = 0;

		while (j < k)
		{
			if (s[i] == m[j] || s[i] + 32 == n[j])
			{
				s[i] = n[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
