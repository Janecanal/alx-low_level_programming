#include "search_algos.h"

/**
 * linear_search - searches for values in an array of
 * integers using linear search
 * @array: pointer to the first element of the array to search in
 * @size:the number of elements in the array
 * @value: value to search for
 * Return: -1 for NULL or failure or index for success
 */

int linear_search(int *array, size_t size, int value)
{
	size_t y;

	if (array == NULL)
		return (-1);
	for (y = 0; y < size; y++)
	{
		printf("value checked array[%ld] = [%d]\n", y, array[y]);
		if (value == array[y])
			return (y);
	}
	return (-1);
}
