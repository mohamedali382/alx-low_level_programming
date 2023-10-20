#include "lists.h"

/**
 * _str - return length of string
 * @s: input string
 * Return: 0 or string length
*/

int _str(char *s)
{
	int i = 0;

	if (!s)
	return (0);
	while (*s++)
	i++;
	return (i);
}
/**
 * print_list - print the linked list
 * @h: pointer of 1st node
 * Return: size of list
*/
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _str(h->strr), h->strr ? h->strr : "(nil)");
		h = h->next;
		i++;
	}
	return (i);
}
