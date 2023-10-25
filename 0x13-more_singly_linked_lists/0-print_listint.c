#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: format
 * Return: length of list
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	const listint_t *head;

	if (!h)
		return (0);
	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
