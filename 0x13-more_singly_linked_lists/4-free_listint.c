#include "lists.h"
/**
* free_listint - free
* @head: head
* Description: hello worlld
*/
void free_listint(listint_t *head)
{
	listint_t *x = head;

	while (head)
	{
		x = head->next;
		free(head);
		head = x;
	}
}
