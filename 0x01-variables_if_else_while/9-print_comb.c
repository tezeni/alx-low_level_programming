#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success):
**/
int main(void)
{
int i;
char j=(char)i;
for (i  =       0;    i       <=      9;    i++)
{
if (i	==	9)
{
putchar(j);
putchar(' ');
}
else
{
putchar(j);
putchar(',');
putchar(' ');
}
}
return  (0);
}
