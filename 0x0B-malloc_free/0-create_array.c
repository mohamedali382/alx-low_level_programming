#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 *  it with a specific char
 *  @size: size of the array
 *  @c: char of the array
 *  Return: 0 or a pointer
*/

char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);

	if (n == 0 || size ==0)
	{
		return (0);
	}

	else
	{
		while (size--)
		{
			n[size] = c;
		}
			return (n);
	}
}
