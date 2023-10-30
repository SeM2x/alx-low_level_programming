#include "main.h"
#define STDERR_FILENO 2

/** main -  copies the content of a file to another file.
 *
 * Return: 0.
*/
int main(int ac, char **av)
{
	int ffd, ftd;
	char *b = (char *) calloc(1024, sizeof(char));

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	ffd = open(av[1], O_RDONLY);
	if (ffd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	ftd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (ftd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);	
	}
	
	while (read(ffd, b, 1024) > 0)
		write(ftd, b, strlen(b));

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
