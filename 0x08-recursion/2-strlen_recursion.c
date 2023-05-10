#include "main.h"

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s == '\0')
	{
		return (len);
	}
	len++;
	s++;
	_strlen_recursion(s);
}
