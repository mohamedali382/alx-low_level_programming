#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the input array
 * @size: size of array
 * @cmp: compare function
 * Return: index or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	return (-1);
}

