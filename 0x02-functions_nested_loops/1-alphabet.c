#include "main.h"
/**
 *  * print_alphabet prints lowercase alphabet
 *   *followed by a new line
 *    * Return: Always 0 (Success):
**/
void print_alphabet(void)
	{
		char ch = 'a';
		while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
		_putchar('\n');
	}
