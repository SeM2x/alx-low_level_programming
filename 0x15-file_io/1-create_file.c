#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);
}
