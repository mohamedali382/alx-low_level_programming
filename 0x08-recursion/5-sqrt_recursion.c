#include "main.h"

/**
 * sqrtt - square root function
 * @n: input number
 * @sq: square root of input number
 * Return: square root of @n
*/

int sqrtt(int n, int sq)
{
	if (sq * sq == n)
	{
		return (sq);
	}
	else if (sq * sq < n)
	{
		return (sqrtt(n, sq + 1));
	}
	else
	{
		return (-1);
	}
}

/**
 * _sqrt_recursion - function that return the
 * square root of a natural number
 *
 * @n: input number
 * Return: square root of the input number
*/

int _sqrt_recursion(int n)
{
	return (sqrtt(n, 1));
}
