#include <stdio.h>
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success):
**/
int main(void)
{
char i;
for (i  =       'a';    i       <=      'z';    i++)
{
switch(i)
{
case 'e':
break;
case 'q':
break;
default :
putchar(i);
}
}
putchar('\n');
return  (0);
}
