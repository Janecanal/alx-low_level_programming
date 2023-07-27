#include <stdlib.h>
#include "lists.h"

/**
 * free_list - this function frees a list_t list.
 * @head: list_t to be freed
 * Return: nothing
 */


void free_list(list_t *head)
{
	list_t *current;

	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
