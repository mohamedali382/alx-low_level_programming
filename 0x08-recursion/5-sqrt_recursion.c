#include "main.h"
#include <math.h>
#include <stdio.h>

/**
 * _sqrt_recursion - function that return the
 * square root of a natural number
 *
 * @n: input number
 * Return: square root of the input number
*/

int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - square root function
 * @n: input number
 * @sq: square root of input number
 * Return: square root of @n
*/

int sqrt(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}
	else if (sq * sq < n)
	{
		return (sqrt(n, sq + 1));
	}
	else
	{
		return (-1);
	}
}
