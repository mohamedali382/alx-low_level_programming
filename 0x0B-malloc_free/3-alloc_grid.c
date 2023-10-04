#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2
 *  dimensional array of integers
 *  @width: array row size
 *  @height: array column size
 *  Return: 0 or pointer
*/

int **alloc_grid(int width, int height)
{
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	int *ptrr = malloc((width * height) * sizeof(int))
		for (i = 0; i < width * height; i++)
			ptrr[i] = i + 1;

	for (i = 0; i < width; i++)
	{
		for (int j = 0; j < height; j++)
		{
			free(ptrr[i * height + j]);
		}
	}
	free(ptr);
	return (ptr);
}
