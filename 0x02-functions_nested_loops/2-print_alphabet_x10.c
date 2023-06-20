#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times
 *
 * Return - void
 */

void print_alphabet_x10(void)
{
char alpha;
int i = 0;

for (i = 1; i <= 10; i++)
{
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
}
