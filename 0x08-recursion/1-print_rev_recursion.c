#include "main.h"

/**
 * _print_rev_recursion - print a sring in reverse
 * @s: input chars
 * Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
