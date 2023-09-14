#include <stdio.h>

/**
 * print_number - prints an integer using _putchar
 * @n: the integer to be printed
 */

void print_number(long n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
		print(n / 10);

	putchar(n % 10 + '0');
}
