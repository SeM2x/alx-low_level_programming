#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: the name of the file.
 * @text_content:  the NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (write(fd, text_content, strlen(text_content)) < 0)
		return (-1);
	close(fd);
	return (1);
}
