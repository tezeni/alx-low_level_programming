#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - fuction with arguments
 * @argc: an intiger passed
 * @argv: a pointer to the character passed
 * Return: success
**/
int main (int argc, char *argv[])
{
	_putchar(*argv[0]);
	_putchar('\n');
	return (0);
}
