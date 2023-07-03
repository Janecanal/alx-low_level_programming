#include "main.h"

/**
 * _memset - function that fills memory with a constant byte.
 * @s: a char pointer
 * @n: an unsigned int,first byte to be filled
 * @b: a char with constant byte to fill memory area.
 * Return: changed array (s) with new value for n byte
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
