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
	if (str == NULL)
	{
		return (0);
	}

	else
	{
		char *ptr = *str;

		*ptr = (char *)malloc(sizeof(char));

		free(ptr);
		return (ptr);
	}
}
