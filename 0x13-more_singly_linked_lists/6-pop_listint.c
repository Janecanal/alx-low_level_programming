#include "lists.h"

/**
 * pop_listint - pops the header of a linked list
 * @head: pointer to the firs element in the list
 * Return: void
 */

int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *tmp;

	if (!*head)
		return (data);
	data = (*head)->n;
	tmp = *head;
	*head = tmp->next;
	free(tmp);

	return (data);
}
