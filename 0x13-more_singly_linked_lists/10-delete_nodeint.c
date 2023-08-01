#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given positiion.
 * @head: First node address.
 * @index: Position of the node to delete.
 * Return: If success (1).
 **/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *previous;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
{
	*head = (*head)->next;
	return (1);
}

	previous = *head;
	current = (*head)->next;
	for (i = 1; current && i < index; i++)
{
	previous = current;
	current = current->next;
}

	if (current)
{
	previous->next = current->next;
	free(current);
	return (1);
}
	return (-1);
}
