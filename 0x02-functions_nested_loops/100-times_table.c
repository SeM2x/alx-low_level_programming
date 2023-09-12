#include "main.h"
#include<stdio.h>

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the given number
 *
 * Return: void
*/

void print_times_table(int n)
{
	int i, j;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i < n + 1; i++)
		{
			for (j = 0; j < n + 1; j++)
			{
				if (j > 0)
				{
					if (j < n + 1)
						printf(",");
					if (i * j < 10)
						printf(" ");
					if (i * j < 100)
						printf(" ");
					printf(" ");
				}
				printf("%d", i * j);
			}
			printf("\n");
		}
	}
}
