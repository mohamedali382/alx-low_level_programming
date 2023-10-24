#include "lists.h"
/**
* add_nodeint_end - add
* @head: pointer
* @n: variable
* Description: hello dsflksdf
* Return: new list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	listint_t *ptr;

	if (!tmp)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (!(*head))
	{
		*head = tmp;
		return (tmp);
	}
	ptr = *head;
	while (ptr->next)
	{
		ptr = ptr->next;
	}
	ptr->next = tmp;
	return (ptr);
}
