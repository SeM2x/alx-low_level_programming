#include <stdio.h>

/**
 * main - prints args number
 * @argc: args count
 * @argv: args array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
