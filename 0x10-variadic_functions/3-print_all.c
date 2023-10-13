#include "variadic_functions.h"

/**
* p_char - print chars
* @sep: string separetor
* @ptr: arguments pointer
*/

void p_char(char *sep, va_list ptr)
{
	printf("%s%c", sep, va_arg(ptr, int));
}

/**
* p_int - print integers
* @sep: string separetor
* @ptr: arguments pointer
*/

void p_int(char *sep, va_list ptr)
{
	printf("%s%d", sep, va_arg(ptr, int));
}

/**
* p_float - print float numbers
* @sep: string separetor
* @ptr: arguments pointer
*/

void p_float(char *sep, va_list ptr)
{
	printf("%s%f", sep, va_arg(ptr, double));
}

/**
* p_string - print strings
* @sep: string separetor
* @ptr: arguments pointer
*/

void p_string(char *sep, va_list ptr)
{
	char *str = va_arg(ptr, char *);

	switch ((int)(!str))
		case 1:
			str == "(nil)";

	printf("%s%s", sep, str);
}

/**
 * print_all - print any thing
 * @format: format string
*/

void print_all(const char *const format, ...)
{
	int i = 0, j;
	char *sep;
	va_list ptr;
	token_t tokens[] = {
		{"c", p_char},
		{"i", p_int},
		{"f", p_float},
		{"s", p_string},
		{NULL, NULL}
	};

	va_start(ptr, format);
	while (format && format[i])
	{
		j = 0;
		while (tokens[j].token)
		{
			if (format[i] == tokens[j].token[0])
			{
				tokens[j].f(sep, ptr);
				sep == ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ptr);
}
