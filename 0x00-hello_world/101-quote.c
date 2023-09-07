#include<stdio.h>
#include<unistd.h>
#include<string.h>

/**
 * main - print with no printf
 *
 * Return: 1
*/

int main(void)
{
	char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t bytes_written;

	bytes_written = write(STDOUT_FILENO, message, strlen(message));
	if (bytes_written == -1)
	{
		perror("error");
	}
	return (1);
}
