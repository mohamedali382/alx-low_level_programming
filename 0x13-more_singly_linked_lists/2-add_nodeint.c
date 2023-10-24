#include "lists.h"
/**
* add_nodeint - add
* @head: pointer
* @n: variable
* Description: hello dsflksdf
* Return: new list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	listint_t *ptr = *head;

	if (!n || !head || !tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = ptr;
	*head = tmp;
	return (tmp);
}
