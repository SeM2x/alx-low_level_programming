#include "main.h"
#define STDERR_FILENO 2

/**
 * cpy_data - copies a file content to another.
 * @ffd: file from definer
 * @ftd: file to definer
 * @b: buffer
 * av: argv
 *
 * Return - Void.
*/
void cpy_data(char **av, int ffd, int ftd, char *b)
{
    int sz;

	sz = 0;
	do {
		sz = read(ffd, b, 1024);
		if (sz < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		if (sz > 0 && write(ftd, b, strlen(b)) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	} while (sz > 0);
}
/**
 * main -  copies the content of a file to another file.
 * @ac: argc
 * @av: argv
 * Return: 0.
*/
int main(int ac, char **av)
	@@ -15,7 +46,6 @@ int main(int ac, char **av)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	ffd = open(av[1], O_RDONLY);
	if (ffd < 0)
	{
	@@ -26,23 +56,18 @@ int main(int ac, char **av)
	if (ftd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	cpy_data(av, ffd, ftd, b);
	if (close(ffd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffd);
		exit(100);
	}
	if (close(ftd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ftd);
		exit(100);
	}
	return (0);
}
