#include "main.h"

/**
 * factorial - function that returns the factorial of a given number
 * @n: input number
 * Return: factorial of n
*/

int factorial(int n)
{
	int f = 1;

	if (n == 1)
	{
		_putchar('1');
	}
	else if (n > 1)
	{
		f *= factorial(n - 1);
	}

	return (f);
}
