#include"main.h"

/**
 * flip_bits - ...
 * @n: ...
 * @m: ...
 * Return: ...
**/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = 0, c = 0;

	i = n ^ m;
	while (i)
	{
		if (i & 1)
			c++;
		i >>= 1;
	}
	return (c);
}
