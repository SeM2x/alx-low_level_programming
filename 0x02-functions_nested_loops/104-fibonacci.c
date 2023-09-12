#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	unsigned long int i, j, x;
	int count;

	count = 0;
	i = 1;
	j = 2;
	while (count < 99)
	{
		printf("%lu, ", i);
		x = i;
		i = j;
		j += x;
		count++;
	}
	printf("%lu\n", i);
	return (0);
}
