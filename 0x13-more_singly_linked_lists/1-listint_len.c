#include "lists.h"
/**
* listint_len - print
* @h: pointer
* Description: print list int
*
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *tmp;

	if (!h)
		return (0);
	tmp = h;
	while (tmp)
	{
		count++;
		tmp = tmp->next;
	}
	return (count);
}
