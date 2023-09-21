#include "main.h"

/**
 *print_number_rec -  prints a positive integer.
 *@n: integer
 *
 *Return: void.
 */

void print_number_rec(int n)
{
	if (n < 10)
	{
		putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}

/**
 *print_number -  prints an integer.
 *@n: integer
 *
 *Return: void.
 */

void print_number(int n)
{
	if (n < 0)
		print_number_rec(-n);
	else
		print_number_rec(n);
}
