#include "main.h"

/**
  * read_textfile - this function reads and prints a file content
  * @filename: the name of the file
  * @letters: Number of letters to be read and printed
  *
  * Return: multiple returns
  **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int filedata, reads;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	filedata = open(filename, O_RDONLY, 0600);
	if (filedata == -1)
		return (0);

	reads = read(filedata, buff, letters);
	write(STDOUT_FILENO, buff, reads);

	free(buff);
	close(filedata);
	return (reads);
}
