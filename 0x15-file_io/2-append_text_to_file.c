#include "main.h"

/**
 * append_text_to_file - this function adds text to a file
 * @filename: this is the pointer to the file to be created
 * @text_content: this is the text to be written in the file at the end
 *
 * Return: 1 for success -1 for failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, r = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY |  O_APPEND);

	if (fd == -1)
		return (-1);

	while (text_content && text_content[r])
		r++;

	write(fd, text_content, r);
	close(fd);

	return (1);
}
