#include <stdio.h>

/**
 * main - prints the sum of even-valued terms in the fabonacci sequence
 *
 * Return: 0
*/

int main(void)
{
	int i, j, x, count;

	i = 1;
	j = 2;
	count = 0;
	while (i < 4000000)
	{
		if (i % 2 == 0)
			count += i;
		x = i;
		i = j;
		j += x;
	}
	printf("%d\n", count);
	return (0);
}
