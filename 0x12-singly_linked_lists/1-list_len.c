#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @h: A linked list
  * Return: The number of elements of a list
**/
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}

	return (c);
}
