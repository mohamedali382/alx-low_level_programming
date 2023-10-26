#include "lists.h"
/**
* sum_listint - return the sum of the data in list
* @head: pointer
* Return: sum of data in list
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
