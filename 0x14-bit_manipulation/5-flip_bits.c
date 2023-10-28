#include "lists.h"

/**
 * flip_bits - flip the bit number
 * @n: 1st input
 * @m: 2nd input
 * Return: number of bits to flip the number
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	int count = 0;

	while (x)
	{
		if (x & 1ul)
			count++;
		x = x >> 1;
	}
	return (count);
}
