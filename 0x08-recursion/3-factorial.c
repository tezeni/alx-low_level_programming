#include "main.h"
/**
 * factorial - function to calculate factorial
 * @n: the number that the factorial is done for
 * Return: factorial of n
**/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
