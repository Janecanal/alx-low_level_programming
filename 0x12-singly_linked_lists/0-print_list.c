#include <stdio.h>
#include "lists.h"

/**
 * print_list - the function prints all the elements of linked list
 * @h: pointer thet lists the list_t to print
 *
 * Return: the number of nodes to be printed
 */

size_t print_list(const list_t *h)
{
	size_t singl = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		singl++;
	}

return (singl);
}
