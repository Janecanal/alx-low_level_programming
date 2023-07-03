#include "main.h"

/**
 * _strstr - function  that locates a substring
 * @haystack: string to be searched
 * @needle: substring to be located
 * Return: if the substring is located
 * - a pointer to the beginning of the located substring
 * if the substring is not located - Null
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}

	return (NULL);
}
