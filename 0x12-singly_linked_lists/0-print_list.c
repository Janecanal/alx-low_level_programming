#include <stdio.h>
#include "lists.h"

/**
 * print_list - this function that prints all the elements of a list_t
 * @h: it is a pointer pointing to the list_t
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t singl = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		singl++;
	}

	return (singl);
}
