#include "main.h"

/**
 *_sqrt_recursion - returns the natural square root of a number.
 *@n: number
 *
 *Return: sqrt of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n % 4 == 0)
		return (2 * _sqrt_recursion(n / 4));
	if (n % 9 == 0)
		return (3 * _sqrt_recursion(n / 9));
	if (n % 25 == 0)
		return (5 * _sqrt_recursion(n / 25));
	if (n % 49 == 0)
		return (7 * _sqrt_recursion(n / 49));
	return (-1);
}
