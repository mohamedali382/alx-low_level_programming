#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: input int
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
		printf("98");
	return (ptr);
}
