#includ "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize the dog structure
 * @d: dog structure
 * @name: the dog name
 * @age: the dog age
 * @owner: the dog owner
 * Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
