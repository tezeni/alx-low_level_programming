#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * main - fuction with arguments
 * @argc: an intiger passed
 * @argv: a pointer to the character passed
 * Return: success
**/
int main(int argc, char *argv[])
{
	char a[] = "Error";
	int i;

	if (argc < 2)
	{
		printf("%s\n", a);
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", i);
	return (0);
}
