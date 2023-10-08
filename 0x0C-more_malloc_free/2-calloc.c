#include "main.h"
#include <stdlib.h>

/**
 * mem - fills memory with constant byte
 * @s: pointer
 * @b: constant
 * @n: max byte to use
 * Return: pointer
*/

char *mem(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
		*s++ = b;
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 * @nmemb: array length
 * @size: size of each element
 * Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;

	if (nmemb == 0 || size == 0)
		return (NULL);

	m = malloc(sizeof(int) * nmemb);
	if (m == 0)
		return (NULL);

	mem(m, 0, sizeof(int) * nmemb);
	return (m);
}
