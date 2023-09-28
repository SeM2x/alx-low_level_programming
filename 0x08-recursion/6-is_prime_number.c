#include "main.h"

/**
 *is_prime -  returns 1 if the input integer is a prime number
 *@n: number
 *@i: devisor
 *
 *Return: 1 if prime else 0
 */

int is_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);

	return (is_prime(n, i + 1));
}

/**
 *is_prime_number -  calls is_prime()
 *@n: number
 *
 *Return: 1 if prime else 0
 */

int is_prime_number(int n)
{
	return (is_prime(n, 2));
}
