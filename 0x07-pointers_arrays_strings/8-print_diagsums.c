#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: the matrix
 * @size: the size of the matrix
 *
 * Return: void.
 */

void print_diagsums(int *a, int size)
{
	int i, j, primary_diagonal, secondary_diagonal;
	int *p = a;

	primary_diagonal = 0;
	secondary_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				primary_diagonal += *p;
			if (i + j == size - 1)
				secondary_diagonal += *p;
			p++;
		}
	}

	printf("%d, %d\n", primary_diagonal, secondary_diagonal);
}
