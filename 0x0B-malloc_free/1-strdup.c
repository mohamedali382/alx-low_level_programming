#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated
 * space in memory, which contains a copy of the
 * string given as a parameter
 * @str: input string
 * Return: 0 or pointer
*/

char *_strdup(char *str)
{
	int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (0);
	for (; *str[size] != '\0'; size++)
		;
	m = malloc(size * sizeof(*str) + 1);

	if (m == 0)
	{
		return (0);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
