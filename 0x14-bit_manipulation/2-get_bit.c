#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @n: input number
 * @index: index of the wanted bit
 * Return: -1 0r value of bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	return (n >> index & 1);
}
