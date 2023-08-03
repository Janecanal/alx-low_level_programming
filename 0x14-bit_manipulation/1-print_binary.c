#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: parameter
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int num = 0;

	if (n > 1)
		print_binary(n >> 1);
	num = n & 1;
	_putchar(num + '0');
}
