#include "main.h"



char *_strcat(char *dest, char *src)
{
	char *tmp;
	*tmp = &dest;
	tmp = dest + src;
	return (tmp);
}
