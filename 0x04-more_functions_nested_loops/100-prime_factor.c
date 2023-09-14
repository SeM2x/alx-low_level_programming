#include <stdio.h>

/**
 *is_prime - check if a give nnumber is prime
 *@num: the given number
 *Return: 0 or 1
 */

int is_prime(long int num)
{
	if (num <= 1)
	{
		return (0);
	}

	if (num == 2)
	{
		return (1);
	}

	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}

	return (1);
}

/**
 *prime_factors - puts the prime factors of a given number in the give n array
 *@n: the given number
 * @factors[]: the given array
 *
 *Return: the length of the array
 */

int prime_factors(long int n, long int factors[])
{
	long int f, i;

	i = 0;
	f = 0;
	while (n > 1)
	{
		while (1)
		{
			if (is_prime(f) && n % f == 0)
			{
				factors[i] = f;
				n = n / f;
				i++;
				break;
			}

			f++;
		}

		if (is_prime(n))
		{
			factors[i] = n;
			i++;
			break;
		}
	}

	return (i);
}

/**
 *main - prints the largest prime factor of 612852475143
 *
 *Return: 0
 */

int main(void)
{
	long int factors[10];
	int i, largest, size;

	size = prime_factors(612852475143, factors);
	largest = factors[0];
	i = 0;
	for (i = 0; i < size; i++)
	{
		if (factors[i] > largest)
			largest = factors[i];
	}

	printf("%d\n", largest);
	return (0);
}
