#include "main.h"

/**
 * leet - enconde in 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s1[j])
			{
				n[i] = s2[j];
			}
		}
	}
	return (n);
}
