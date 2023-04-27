#include "main.h"

/**
 * * largest_number - returns the largest of 3 numbers
 *  *@a: first integer
 *   *@b: second integer
 *    *@c: third integer
 *     *Return: largest number
**/

int largest_number(int i, int j, int k)
{
	int largest;

	if (i > j)
	{
        
		if (i > k)
		{
			largest = i;
		}
	}
	else 
	{
		if (j > k)
		{
			largest = j;
		}
		else 
		{
			largest = k;
		}
	}
	return (largest);
}
