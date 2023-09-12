#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	long double i, j, x;
	int count;

	count = 0;
	i = 1;
	j = 2;
	while (count < 97)
	{
		printf("%.0Lf, ", i);
		x = i;
		i = j;
		j += x;
		count++;
	}
	printf("%.0Lf\n", i);
	return (0);
}
