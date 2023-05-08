#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to check a char
 * @a: array input
 * @size: array input
 * Return: void
**/
void print_diagsums(int *a, int size)
{
	int i, j, a = 0, b = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
		a = a + a[i];

	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
		b = b + a[j];

	printf("%d, %d\n", a, b);
}
