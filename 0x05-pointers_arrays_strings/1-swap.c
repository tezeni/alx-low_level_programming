#include <stdio.h>

/**
 * * swap_int - swaps two integers
 *  * @a : int pointer of first integer
 *   * @b : int pointer of second integer
 *    * return : void
**/

void swap_int(int *a, int *b)
{
	int	c	=	*a;

	*a	=	*b;

	*b	=	c;
}
