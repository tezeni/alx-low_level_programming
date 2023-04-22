#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success):
**/
int main(void)
{
int i;
int j;
int k;
for (i  =       0;      i       <=      9;      i++)
{
for (j  =       0;      j       <=      9;      j++)
{
for (k	=	0;	k	<=	9;	k++)
{
if (i   >       j)
continue;
if (i   ==      j)
continue;
if (j	>	k)
continue;
if (j	==	k)
continue;
putchar('0'     +       i);
putchar('0'     +       j);
putchar('0'	+	k);
if (i	==	7	&&	k	==	9);
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return  (0);
}
