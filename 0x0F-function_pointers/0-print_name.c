#include "function_pointers.h"

/**
 * print_name - function to print names
 * @name: the name of the person
 * @f: pointer to function
 * Return: void
**/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}
