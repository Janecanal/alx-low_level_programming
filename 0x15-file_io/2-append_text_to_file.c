#include "main.h"

/**
 * append_text_to_file - this function appends text at the end of a file.
 * @filename: the filename.
 * @text_content: the added content.
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if the file fails.
 **/

int append_text_to_file(const char *filename, char *text_content)
{
	int filedata;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	filedata = open(filename, O_WRONLY | O_APPEND);

	if (filedata == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rwr = write(filedata, text_content, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(filedata);

	return (1);
}
