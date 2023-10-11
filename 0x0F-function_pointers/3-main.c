#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - performs simple operations.
 * @argc: argc
 * @argv: argv
 *
 * Return: 0.
*/

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (
		strcmp(argv[2], "+") != 0 && strcmp(argv[2], "-") != 0 &&
		strcmp(argv[2], "*") != 0 && strcmp(argv[2], "/") != 0 &&
		strcmp(argv[2], "%") != 0
	)
	{
		printf("Error\n");
		exit(99);
	}
	if (
		(strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) &&
		atoi(argv[3]) == 0
	)
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = (*get_op_func(argv[2]))(a, b);
	printf("%d\n", res);

	return (0);
}

