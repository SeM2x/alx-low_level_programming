#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	long long int i, j, x;
	int count;

	count = 0;
	i = 1;
	j = 2;
	while (count < 49)
	{
		printf("%lld, ", i);
		x = i;
		i = j;
		j += x;
		count++;
	}
	printf("%lld\n", i);
	return (0);
}
