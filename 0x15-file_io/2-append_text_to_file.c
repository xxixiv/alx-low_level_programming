#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename - files name
 * @text_content - content of the file
 *
 * Return: 1 if successful, -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f;
	int l;
	int rwr;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		for (l = 0; text_content[l]; l++)
			;

		rwr = write(f, text_content, l);

		if (rwr == -1)
			return (-1);
	}

	close(f);

	return (1);
}
