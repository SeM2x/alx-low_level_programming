#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	long int i, j, x;
	int count;

	count = 0;
	i = 1;
	j = 2;
	while (count < 49)
	{
		printf("%ld, ", i);
		x = i;
		i = j;
		j += x;
		count++;
	}
	printf("%ld\n", i);
	return (0);
}
