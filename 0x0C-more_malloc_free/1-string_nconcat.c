#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function to concatenate strings
 * @n: size
 * @s1: string 1
 * @s2: string 2
 * Return: 98 and on failure or pointer
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *a;
	unsigned int i;
	int j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = malloc(strlen(s1) + n + 1);

	if (a == NULL)
		return (NULL);
	while (s1[j] != '\0')
	{
		a[j] = s1[j];
		j++;
	}
	if (sizeof(s2) >= n)
	{
		for (i = 0; i < n; i++)
		{
			a[j] = s2[i];
			j++;
		}
		a[j] = '\0';
		return (a);
	}
	else
	{
		for (i = 0; i < sizeof(s2); i++)
		{
			a[j] = s2[i];
			j++;
		}
		a[j] = '\0';
		return (a);
	}
}

