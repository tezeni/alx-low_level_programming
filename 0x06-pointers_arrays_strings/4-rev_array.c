#include "main.h"

/**
 * reverse_array - reverses a string
 * @a: first input
 * @n: second input
**/

void reverse_array(int *a, int n)

{

	int j, i;

	for (i = n - 1; i >= n / 2; i--)
	{
	j = a[n - 1 - i];
	a[n - 1 - i] = a[i];
	a[i] = j;
	}
}
