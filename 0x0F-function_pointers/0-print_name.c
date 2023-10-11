#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - that prints a name.
 * @name: input name
 * @f: pointer point to the name
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	f = &name;
	printf("%s\n", f);
}
