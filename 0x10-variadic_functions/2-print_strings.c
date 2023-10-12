#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @separator:  printed between the strings
 * @n: number of strings
 *
 * Return: void
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	int i = n;
	char *s;

	va_list ptr;

	if (!n)
	{
		printf("\n");
		return;
	}

	va_start(ptr, n);

	while (i--)
		printf("%s%s", (s = va_arg(ptr, char*)) ? s : "(nil)",
			i ? (separator ? separator : "") : "\n");
	va_end(ptr);
}
