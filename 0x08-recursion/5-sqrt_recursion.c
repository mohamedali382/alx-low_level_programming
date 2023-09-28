#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - function that return the
 * square root of a natural number
 *
 * @n: input number
 * Return: square root of the input number
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (sqrt(n) % 2 == 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt(_sqrt_recursion(n)));
	}
}
