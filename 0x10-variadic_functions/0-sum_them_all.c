#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: input parameter
 *
 * Return: 0 or sum of input elements
*/

int sum_them_all(const unsigned int n, ...)
{
	int i, sum = 0;

	va_list ptr;

	va_start(ptr, n);

	if (n == 0)
	{
		return (0);
	}

	else
	{
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, const unsigned int);

		va_end(ptr);
	}
	return (sum);
	}
}
