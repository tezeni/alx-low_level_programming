#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

/**
 * main - fuction with arguments
 * @argc: an intiger passed
 * @argv: a pointer to the character passed
 * Return: success
**/
int main(int argc, char *argv[])
{
	char *a;
	int i;
	unsigned int j, sum = 0;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
		{
			a = argv[i];

			for (j = 0; j < strlen(a); j++)
			{
				if (a[j] < 48 || a[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(a);
			a++;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
