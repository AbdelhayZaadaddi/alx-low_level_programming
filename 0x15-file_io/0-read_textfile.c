#include "main.h"

/**
 * read_textfile - reads a text file & prints the letters
 *
 * @filename: file name.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed if fails returns 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int filed;
	ssize_t nr, nw;

	if (!filename)
		return (0);
	filed = open(filename, O_RDONLY);

	if (filed == -1)
		return (0);
	buffer = malloc(sizeof(char) * (letters));

	if (!buffer)
		return (0);
	nr = read(filed, buffer, letters);
	nw = write(STDOUT_FILENO, buffer, nr);

	close(filed);

	free(buffer);

	return (nw);
}
