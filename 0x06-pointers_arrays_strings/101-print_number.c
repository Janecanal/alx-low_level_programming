#include "main.h"

/**
 * print_number - print an interger
 * @n: integer params
 * Return: void
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;
	if (n < o)
	{
		_putchar('-');
		n1 = -n;
	}
	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
}
