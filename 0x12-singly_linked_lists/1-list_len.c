#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - the function returns numbers of elements in a linked list_t
 * @h: the pointer points to the list_t
 * Return: number of elements
 **/
size_t list_len(const list_t *h)
{
	size_t singl = 0;

	while (h)
	{
		singl++;
		h = h->next;
	}
	return (singl);
}
