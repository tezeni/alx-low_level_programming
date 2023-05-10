#include "main.h"

/**
 * _pow_recursion - function to calculate the power of given input
 * @x: the input to do the power for
 * @y: the input which is the power it self
 * Return: integer
**/

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));

}
