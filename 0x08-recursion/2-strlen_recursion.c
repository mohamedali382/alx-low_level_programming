#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input chars
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int counter = 0, stock;

		if (*s != '\0')
		{
			counter++;
		}

		stock += counter;

		_strlen_recursion(s + 1);

	return (stock);
}
