#include "main.h"

/**
 *print_number - prints an integer using _putchar
 *@n: the integer to be printed
 */
void print_number(int n)
{
	int divisor = 1;
	int is_negative = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n < 0)
	{
		is_negative = 1;
		n = -n;
	}

	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor > 0)
	{
		int digit = (n / divisor) % 10;

		_putchar(digit + '0');
		divisor /= 10;
	}

	if (is_negative)
	{
		_putchar('-');
	}
}
