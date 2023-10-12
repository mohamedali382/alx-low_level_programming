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
	int i = n, sum = 0;

	va_list ptr;

	if (!n)
		return (0);
	va_start(ptr, n);
	while (i--)
		sum += va_arg(ptr, int);
	va_end(ptr);

	return (sum);
}
