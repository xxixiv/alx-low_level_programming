#include "main.h"

/**
 * read_textfile - reads the file and prints letters
 * @filename - the name of the file
 * @letters - num of letters printed
 * Return -  num of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t rd, wr;
	char *a;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	a = malloc(sizeof(char) * (letters));
	if (!a)
		return (0);

	rd = read(f, a, letters);
	wr = write(STDOUT_FILENO, a, rd);

	close(f);

	free(a);

	return (wr);
}
