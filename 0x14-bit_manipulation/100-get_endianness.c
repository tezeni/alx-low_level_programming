#include"main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 or 1
**/
int get_endianness(void)
{
	int n = 0x01;

	char *b = (char *)&n;

	return (b[0]);
}
