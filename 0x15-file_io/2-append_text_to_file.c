#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int filed;
	int num_letters;
	int rw;

	if (!filename)
		return (-1);

	filed = open(filename, O_WRONLY | O_APPEND);

	if (filed == -1)
		return (-1);

	if (text_content)
	{
		for (num_letters = 0; text_content[num_letters]; num_letters++)
			;

		rw = write(filed, text_content, num_letters);

		if (rw == -1)
			return (-1);
	}

	close(filed);

	return (1);
}
