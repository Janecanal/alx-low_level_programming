#include <stdio.h>
/**
 * main - Prints the number since zero to nine
 * Return: 0 (success)
 */
int main(void)
{
int n;
for (n = '0'; n <= '9'; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
