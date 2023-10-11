#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function.
 * @argc: argc
 * @argv: argv
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	unsigned char *main_begin = (unsigned char *)main;
	unsigned char *main_end = main_begin;
	unsigned char *ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	i = 0;
	while (i < atoi(argv[1]) && *main_end != 0xC3)
	{
		main_end++;
		i++;
	}

	for (ptr = main_begin; ptr < main_end; ptr++)
	{
		printf("%02x", *ptr);
		if (ptr < main_end - 1)
			printf(" ");
	}	
	printf("\n");

	return (0);
}
