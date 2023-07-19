#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array of element on a newline.
 * @size: how many elents to be printed.
 * @array: array
 * @action: pointer to print numbers or hexadecimals.
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}


