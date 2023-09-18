#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the first n element of the array
 * @a: the array
 * @n: int n
 *
 * Return: void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
