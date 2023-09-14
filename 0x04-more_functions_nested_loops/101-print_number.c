#include "main.h"

/**
 *_pow - calculates 10 to the power of a given number
 *@l: the given number
 *
 *Return: 10 ^ l
 */

int _pow(int l)
{
	int i, res;

	res = 1;
	for (i = 0; i < l; i++)
		res = res * 10;

	return (res);
}

/**
 *print_number - prints a number
 *@n: the given number
 *
 *Return: void
 */

void print_number(int n)
{
	int length, m, i;

	length = 0;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			n = -1 * n;
			_putchar('-');
		}

		m = n;

		while (m > 0)
		{
			m = m / 10;
			length++;
		}

		for (i = length - 1; i >= 0; i--)
		{
			_putchar((n / _pow(i)) % 10 + '0');
		}
	}
}
