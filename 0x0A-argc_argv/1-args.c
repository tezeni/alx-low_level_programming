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
	int count = 0;

	if (argc >= 0 && argv[count] != NULL)
	{

		count++;
		printf("%d\n", count);
		argc--;
	}
	return (0);
}
