#include "main.h"

/**
 * print_number - function to print integer
 * @n: input
 * Return: void
**/

void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	_putchar('-');
	num = -num;
	}

	if ((num / 10) > 0)
	printf(num / 10);
	_putchar((num % 10) + '0');
}
