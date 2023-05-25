#include <stdlib.h>
#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);


/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
	{
		c++;
	}

	return (c);
}

/**
  * _strcpy - Copy a string
  * @dest: Destination value
  * @src: Source value
  *
  * Return: the pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i++] = '\0';

	return (dest);
}
/**
  * new_dog - struct for new dog
  * @name: new dog name
  * @age: new dog age
  * @owner: new dog owner
  *
  * Return: new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bla_dog;
	int name_l = 0, own_l = 0;

	if (name != NULL && owner != NULL)
	{
		name_l = _strlen(name) + 1;
		own_l = _strlen(owner) + 1;
		bla_dog = malloc(sizeof(dog_t));

		if (bla_dog == NULL)
			return (NULL);

		bla_dog->name = malloc(sizeof(char) * name_l);

		if (bla_dog->name == NULL)
		{
			free(bla_dog);
			return (NULL);
		}

		bla_dog->owner = malloc(sizeof(char) * own_l);

		if (bla_dog->owner == NULL)
		{
			free(bla_dog->name);
			free(bla_dog);
			return (NULL);
		}

		bla_dog->name = _strcpy(bla_dog->name, name);
		bla_dog->owner = _strcpy(bla_dog->owner, owner);
		bla_dog->age = age;
	}

	return (bla_dog);
}
