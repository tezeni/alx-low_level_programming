#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>
#include <string.h>

int _isdigit(int c);

/**
 * main - fuction with arguments
 * @argc: an intiger passed
 * @argv: a pointer to the character passed
 * Return: success
**/
int main(int argc, char *argv[])
{
	int i;
	int j, sum = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			j = atoi(argv[i]);

			if (_isdigit(j) == 0)
			{
				printf("Error\n");
				return (1);
			}
			sum += j;
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
