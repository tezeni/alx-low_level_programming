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
int l;
for (i  =       0;      i       <=      9;      i++)
{
for (j  =       0;      j       <=      9;      j++)
{
for (k  =       0;      k       <=      9;      k++)
{
for (l	=	0;	l	<=	9;	l++)
{
if (i	==	k	&&	j	==	l)
continue;
if (i	==	k	&&	i	>	j)
continue;
putchar('0'     +       i);
putchar('0'     +       j);
putchar(' ');
putchar('0'     +       k);
putchar('0'	+	l);
if (j   ==      8       &&      k       ==      9)
continue;
putchar(',');
putchar(' ');
}
}
}
}
return	(0);
}
