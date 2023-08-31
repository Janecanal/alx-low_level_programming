#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0;
	int i;
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}
	len -= 1;
	i = 0;

	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
		{
			return (total);
		}
		if (b[i] == '1')
		{
			total += (1 * (1 << len));
		}
		i++;
		len--;
	}
	return (total);
}
