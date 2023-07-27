#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees a list_t list.
 * @head: the list_t to be freed
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
