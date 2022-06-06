#include "main.h"

/**
 * create_file - creates file
 * @filename: the files name
 * @text_content: contents of the file
 *
 * Return: 1 for success or -1 for failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f;
	int l;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (l = 0; text_content[l]; l++)
		;

	rwr = write(f, text_content, l);

	if (rwr == -1)
		return (-1);

	close(f);

	return (1);
}
