#include "lists.h"

/***/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));

	new_node->strdub(str) = strdub(str);
