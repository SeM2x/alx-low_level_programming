#include <stdio.h>

/**
 * main - multiplies two numbers
 * @argc: args count
 * @argv: args array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", argv[1] * argv[2]);
	return (0);
}
