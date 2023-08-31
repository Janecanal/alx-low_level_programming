#include "main.h"

/**
 * get_endianness - this function checks the endianness.
 *
 * Return: If big-endian - 0. If little-endian - 1.
 */

int get_endianness(void)
{
	int n = 1;
	char *e = (char *)&n;

	if (*e == 1)
		return (1);

	return (0);
}
