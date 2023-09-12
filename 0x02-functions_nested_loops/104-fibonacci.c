#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
*/

int main(void)
{
	double i, j, x;
	int count;

	count = 0;
	i = 1;
	j = 2;
	while (count < 97)
	{
		printf("%.0lf, ", i);
		x = i;
		i = j;
		j += x;
		count++;
	}
	printf("%.0lf\n", i);
	return (0);
}
