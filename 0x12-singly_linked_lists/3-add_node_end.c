#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it adds a new node at the end of a list_t list.
 * @head: double pointer which is the first pointing to list_t
 * @str: duplicates string in the new node
 * Return: address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newn;
	list_t *tmp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	newn = malloc(sizeof(list_t));
	if (!newn)
		return (NULL);

	newn->str = strdup(str);
	newn->len = len;
	newn->next = NULL;

	if (*head == NULL)
	{
		*head = newn;
		return (newn);
	}

	while (tmp->next)
		tmp = tmp->next;

	tmp->next = newn;

	return (newn);
}
