#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_sz, w_sz;
	char *c = (char*)calloc(letters, sizeof(char)); ;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	r_sz = read(fd, c, letters);
	if (r_sz < 0)
		return (0);
	w_sz = write(1, c, r_sz);
	close(fd);

	if (w_sz != r_sz)
		return (0);
	return (r_sz);
}
