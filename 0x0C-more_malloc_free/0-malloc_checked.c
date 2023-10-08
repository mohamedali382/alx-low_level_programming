#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: input init
 * Return: a pointer to the allocated memory
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == 0)
		printf("98");
	return (ptr);
}
