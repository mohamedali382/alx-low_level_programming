#include "main.h"

/**
 * prime - function that check the prime numbers
 * @n: input number
 * @i: checked by number
 * Return: 0 or 1
*/

int prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n % i == 0)
	{
		return (0);
	}
	else if (i >= (n / 2))
	{
		return (1);
	}
	else
	{
		return (prime(n, i + 1));
	}
}

/**
 * is_prime_number - that returns 1 if the input integer is a
 *  prime number, otherwise return 0
 *  @n: input number
 *  Return: 0 or 1
*/

int is_prime_number(int n)
{
	return (prime(n, 1));
}
