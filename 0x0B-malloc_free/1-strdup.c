#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function to duplicate strings
 * @str: string to be duplicated
 * Return: return NULL or duplicated string
**/

char *_strdup(char *str)
{
	char *a;
	unsigned int i, j;

	if (str == NULL)
		return (NULL);

	i = strlen(str);

	a = malloc((i + 1) * sizeof(char));

	if (a == NULL)
		return (NULL);
	for (j = 0; j < (i + 1); j++)
	{
		a[j] = str[j];
	}
	return (a);
}
