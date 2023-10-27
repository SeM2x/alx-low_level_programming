#include "main.h"

/**
 *print_binary - prints the binary representation of a number.
 *@n: number
 *
 *Return: Void.
 */
void print_binary(unsigned long int n)
{
	int bit_count = sizeof(unsigned long int) * 8;
	unsigned int mask;
	int i, print;

	print = 0;

	if (n == 0)
		_putchar('0');

	for (i = bit_count - 1; i >= 0; i--)
	{
		mask = 1UL << i;
		if ((n & mask))
			print = 1;
		if (print)
		{
			if ((n & mask) == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar('1');
			}
		}
	}
}
