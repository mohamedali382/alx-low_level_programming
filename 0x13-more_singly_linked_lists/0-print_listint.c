#include "lists.h"

/**
 * print_listint - prints all the elements of the list
 * @h: format
 * Return: length of list
*/

size_t print_listint(const listint_t *h)
{
	int count = 0;

	struct listint_s *head = h;

	while (head != NULL)
	{
		count++;
		head = head->next;
	}
	return (count);
}
