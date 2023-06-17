#include <stdio.h>
/**
 * main - prints in reverse
 * Return: 0 (Success)
 */
int main(void)
{
int c;

for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
