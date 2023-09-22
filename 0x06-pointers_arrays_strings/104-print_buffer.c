#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_10bytes - prints 10 bytes each line
 *@i: index
 *@buff: a buffer
 *
 *Return: void.
 */

void print_10bytes(int i, int *buff)
{
	int j, k;

	if ((i + 1) % 10 != 0)
	{
		for (k = 0; k < 10 - (i + 1) % 10; k++)
			printf("  ");
		printf("  ");
	}

	for (j = 0; j < 10; j++)
	{
		if (buff[j] >= 32 && buff[j] <= 126)
			printf("%c", buff[j]);
		else
			printf(".");
		if ((i + 1) % 10 == j + 1)
			break;
	}

	printf("\n");
}

/**
 *print_buffer - prints a buffer.
 *@b: buffer pointer
 *@size: size
 *
 *Return: void.
 */

void print_buffer(char *b, int size)
{
	int i, j;
	int *buff;

	buff = malloc(sizeof(int) * 10);

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (i % 10 == 0)
			{
				j = 0;
				printf("%.8x: ", i);
			}

			printf("%.2x", b[i]);
			buff[j] = b[i];
			j++;

			if ((i + 1) % 2 == 0)
				printf(" ");

			if ((i + 1) % 10 == 0 || (i + 1) == size)
				print_10bytes(i, buff);
		}
	}
	else
		printf("\n");
}
