#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _strlen - Returns the length of a string
 * @s: String to count
 * Return: String length
**/
int _strlen(const char *s)
{
	int c = 0;

	while (*s)
	{
		s++;
		c++;
	}

	return (c);
}
/**
 * add_node - Adds a new node at the beginning of a list
 * @head: The original linked list
 * @str: The string to add to the node
 * Return: The address of the new list or NULL if it failed
**/
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;

	if (head != NULL && str != NULL)
	{
		tmp = malloc(sizeof(list_t));
		if (tmp == NULL)
			return (NULL);

		tmp->str = strdup(str);
		tmp->len = _strlen(str);
		tmp->next = *head;

		*head = tmp;

		return (tmp);
	}

	return (0);
}
