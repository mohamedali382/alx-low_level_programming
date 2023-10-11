#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: input array
 * @size: size of @array
 * @action: pointer point to the size
 * Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (action && size)
	{
		for (i = 0; i < size; i++)
			array[i]
	}
}
