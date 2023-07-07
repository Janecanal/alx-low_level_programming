#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the multiplication of two args number
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0 (Succes)
 */

int main(int argc, char *argv[])
{
	int i, res = 1;

	if  (argc != 3)
	{
		printf("%s\n", "Error");
		return (1);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			res *= atoi(argv[i]);
		}
		printf("%d\n", res);
	}
	return (0);
}
