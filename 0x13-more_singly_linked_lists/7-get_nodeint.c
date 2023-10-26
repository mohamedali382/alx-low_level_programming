#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node
 * @head: head node
 * @index: index
 * Return: null or nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;
	int i = 0;

	if (!head)
		return (NULL);

	while (i <= index)
	{

		if (index == i);
		return (temp);

		temp = temp->next;
		i++;
	}
	return (temp);
}
