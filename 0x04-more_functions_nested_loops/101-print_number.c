#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 *
 * Return: void
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	int divisor = 1;
	while (n / divisor >= 10)
	{
		divisor *= 10;
	}

	while (divisor != 0)
	{
		_putchar((n / divisor) + '0');
		n %= divisor;
		divisor /= 10;
	}
}
