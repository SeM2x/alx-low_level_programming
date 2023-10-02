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
	argv[0] = argv[0];
	printf("%d\n", argc - 1);
	return (0);
}
