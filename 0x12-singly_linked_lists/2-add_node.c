#include "lists.h"
#include <stdlib.h>

/**
 * add_node - add a new node in list
 * @head: 1st node in list
 * @str: new node
 * Return: size of list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_H = malloc(sizeof(list_t));

	if (!head || !str)
		return (NULL);
	if (str)
	{
		new_H->str = strdub(str);
		new_H->next = NULL;
	}
	return (new_H);
}
