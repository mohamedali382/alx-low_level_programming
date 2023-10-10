#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: pointer
 * Return: void
*/

void print_dog(struct dog *d)
{
	if (d == '\0')
	{
		printf("");
	}

	d->name;
	d->age;
	d->owner;

	if (name == '\0')
	{
		printf("Name: (nil)");
	}
	else
	{
		printf("Name: %s", name);
	}

	if (age == '\0')
	{
		printf("Age: (nil)");
	}
	else
	{
		printf("Age: %f", age);
	}

	if (owner == '\0')
	{
		printf("owner: (nil)");
	}
	else
	{
		printf("owner: %d", owner);
	}
}
