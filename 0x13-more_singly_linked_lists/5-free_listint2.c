#include "lists.h"

/**
 * free_listint2 - Frees a linked list
 * @head: pointer to the firs element in the list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (!head)
		return;
	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}
}
