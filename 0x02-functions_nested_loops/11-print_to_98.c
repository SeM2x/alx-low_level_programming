#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from n to 98
 * @n: the given number
 *
 * Return: void
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	} else
	{
		for (; n < 98; n++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}

}
