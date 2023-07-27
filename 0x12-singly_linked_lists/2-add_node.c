#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - this function adds a new node at the beginning of a list_t
 * @head: a double pointer which points to the head list_t
 * @str: a new string to add in the node
 * Return: address of a new element, or NULL if it fails.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int len = 0;

	while (str[len])
		len++;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = len;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
