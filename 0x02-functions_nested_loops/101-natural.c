#include <stdio.h>

/**
 * main - computes and prints the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: 0
*/

int main(void)
{
	int i, count;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;
	}

	printf("%d\n", count);
	return (0);
}
