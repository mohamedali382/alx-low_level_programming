#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - return length of string
 * @str: input string
 * Return: string length
*/

int _strlen(const char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * copy - copy string
 * @dest: sorted string
 * @src: copied string
 * return: sorted string
*/

char *copy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: input name
 * @age: dog age
 * @owner: dog's owner
 * Return: 0 or new struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if ((*dog).owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}

	dog->name = copy(dog->, name);
	dog->age = age;
	dog->owner = copy(owner->owner, owner);

	return (dog);
}
