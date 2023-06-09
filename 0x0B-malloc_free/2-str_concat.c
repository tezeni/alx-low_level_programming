#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concatinate two strings
 * @s1: the first string
 * @s2: the second str
 * Return: pointer to concatnated strings
**/

char *str_concat(char *s1, char *s2)
{
	unsigned int i;
	char *a;
	unsigned int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;
	a = malloc((strlen(s1) + strlen(s2) + 1) * sizeof(char));

	if (a == 0)
		return (NULL);
	while (s1[i] != 0)
	{
		a[i] = s1[i];
		i++;
	}
	for (k = 0; s2[k] != 0; k++)
	{
		a[i] = s2[k];
		i++;
	}
	a[i] = '\0';
	return (a);
}
