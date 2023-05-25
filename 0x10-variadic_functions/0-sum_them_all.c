#include "variadic_functions.h"
#include <stdio.h>

/**
 * sum_them_all - function to add arguments passed
 * @n: argument passed to th fun
 * Return: 0  or sum
**/

int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list a;
		unsigned int i;
		int sum;

		sum = 0;

		va_start(a, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(a, int);
		}
		return (sum);
	}
	return (0);
}
