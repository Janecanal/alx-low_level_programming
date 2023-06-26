#include "main.h"

/**
 * swap_int - funtion that swaps values of two integers
 * @a: the first integer to be swapped
 * @b: the second integer to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
