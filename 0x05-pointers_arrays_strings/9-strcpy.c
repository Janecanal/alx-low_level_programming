#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * @dest: Destination value
 * @src: Source value
 * Return: The point to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}
