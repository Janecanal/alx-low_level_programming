#include "main.h"

/**
 * Main - entry point
 *
 * Description -  a function that prints the alphabet, in lowercase
 *
 * Return: always 0
 */

void print_alphabet(void)
{
char lowercase;
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
	_putchar(lowercase);
}
_putchar('\n');
}
