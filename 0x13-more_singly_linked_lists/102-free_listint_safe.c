#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list.
 * @h: poiter to the first node on the list.
 *
 * Return: size of the list that was freed.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int dif;
	listint_t *first;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		dif = *h - (*h)->next;
		if (dif > 0)
		{
			first = (*h)->next;
			free(*h);
			*h = first;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;
	return (len);
}
