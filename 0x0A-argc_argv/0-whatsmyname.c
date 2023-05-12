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
int _putchar(char c);

int main (int argc, char *argv[])
{
	if (argc > 0)
	{
		_putchar(*argv[0]);
		_putchar('\n');
	}
	return (0);
}

/**
 *  * _putchar - writes the character c to stdout
 *   * @c: The character to print
 *    *
 *     * Return: On success 1.
 *      * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
                return (write(1, &c, 1));
}
