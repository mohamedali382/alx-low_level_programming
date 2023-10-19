#include "lists.h"

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
		new_H->str = strdup(str);
		if (!new_H->str)
		{
			free(new_H);
			return (NULL);
		}
		new_H->len = _str(new_H->str);
	}
	new_H->next = *head;
	*head = new_H;
	return (new_H);
}