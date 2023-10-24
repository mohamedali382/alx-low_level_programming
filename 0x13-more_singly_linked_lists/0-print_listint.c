#include "lists.h"
/**
* print_listint - print
* @h: pointer
* Description: print list int
*
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;
	const listint_t *tmp;

	if (!h)
		return (0);
	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		count++;
		tmp = tmp->next;
	}
	return (count);
}
