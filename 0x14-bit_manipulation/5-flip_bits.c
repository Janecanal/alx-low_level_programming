#include "main.h"

/**
 * flip_bits - this function counts the number of bits that needs to be
 * flipped to get from one number to another.
 * @n: The number.
 * @m: The number to flip n to.
 * Return: number of bits to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xr = n ^ m, bt = 0;

	while (xr > 0)
	{
		bt += (xr & 1);
		xr >>= 1;
	}

	return (bt);
}
