#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * argstostr - fuction with arguments
 * @ac: a size for the array
 * @av: a pointer to the character passed
 * Return: new string or NULL
**/

char *argstostr(int ac, char **av)
{
	int a = 0, i = 0, j = 0, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	while (i < ac)
	{
		while (av[i][j])
		{
			a++;
			j++;
		}

		j = 0;
		i++;
	}

	s = malloc((sizeof(char) * a) + ac + 1);

	i = 0;
	while (av[i])
	{
		while (av[i][j])
		{
			str[k] = av[i][j];
			k++;
			j++;
		}

		str[k] = '\n';

		j = 0;
		k++;
		i++;
	}

	k++;
	str[k] = '\0';
	return (str);
}
