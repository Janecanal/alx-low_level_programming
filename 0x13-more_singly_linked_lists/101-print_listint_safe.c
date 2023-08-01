#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - this function counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tmp, *curr;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	tmp = head->next;
	curr = (head->next)->next;

	while (curr)
	{
		if (tmp == curr)
		{
			tmp = head;
			while (tmp != curr)
			{
				nodes++;
				tmp = tmp->next;
				curr = curr->next;
			}

			tmp = tmp->next;
			while (tmp != curr)
			{
				nodes++;
				tmp = tmp->next;
			}

			return (nodes);
		}
		tmp = tmp->next;
		curr = (curr->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - this function Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number returns nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node, index = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < node; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (node);
}
