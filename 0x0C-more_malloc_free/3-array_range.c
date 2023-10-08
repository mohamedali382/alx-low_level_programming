#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum input in array
 * @max: maximum input in array
 * Return: arranged pointer
*/

int *array_range(int min, int max)
{
	if (min > max)
	{
		return (NULL);
	}

	int len, i;
	int *ptr;

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (!ptr)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min++;
	return (ptr);
}
