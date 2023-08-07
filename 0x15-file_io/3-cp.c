#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * @argc: The argument count
  * @argv: The argument vector
  * Return: ...
  */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);
	exit(0);
}

/**
  * copy_file - this function copies file
  * @src: the source to be copied
  * @dest: the destination to be copied to
  * Return: different values dependind on conditions
  **/

void copy_file(const char *src, const char *dest)
{
	int ofiledata, tfiledata, readed;
	char buff[1024];

	ofiledata = open(src, O_RDONLY);
	if (!src || ofiledata == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	tfiledata = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(ofiledata, buff, 1024)) > 0)
	{
		if (write(tfiledata, buff, readed) != readed || tfiledata == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(ofiledata) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filedata %d\n", ofiledata);
		exit(100);
	}

	if (close(tfiledata) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close filedata %d\n", tfiledata);
		exit(100);
	}
}
