#include <stdio.h>
/**
 * main - prints only lower case alphabet
 * Return: 0 (Success)
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
