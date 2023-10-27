#include "main.h"

/**
 * set_bit -  sets the value of a bit
 * @n: pointer that point in the choosen index
 * @index: the choosen index
 * Return: -1 or 1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index == 0)
	{
		*n = *n | 1;
		return (1);
	}

	if (index > sizeof(*n) * 8)
		return (-1);

	b = 1 << index;
	*n = *n | b;
	return (1);
}
