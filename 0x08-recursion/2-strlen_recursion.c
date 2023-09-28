#include "main.h"

/**
 * _strlen_recursion - function that returns the length of a string
 * @s: input chars
 * Return: length of string
*/

int _strlen_recursion(char *s)
{
	int counter = 0;

		if (*s !='\0')
		{
			counter++;
			_strlen_recursion(s + 1);
		}

	return (counter);
}
