#include "main.h"

/**
 * binary_to_uint - convert binary to decimal
 * @b: pointer
 * Return: 0 or the converted number
*/

unsigned int binary_to_uint(const char *b)
{
	long  num, sum = 0, base = 1, x;


	if (!b)
		return (0);
	num = atoi(b);
	while (*b)
	{
		if (*b < '0' || *b > '1')
			return (0);
		b++;
		continue;
	}
	while (num > 0)
	{
		x = num % 10;
		if (x < 0 || x > 1)
			return (0);
		sum = sum + x * base;
		base = base * 2;
		num = num / 10;
	}
	return (sum);
}
