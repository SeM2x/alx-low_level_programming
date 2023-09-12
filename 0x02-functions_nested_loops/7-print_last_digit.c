#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the given number
 *
 * Return: the last digit of the number
*/

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)	
		_putchar('-');
	_putchar(last_digit + '0');

	return (last_digit);
}
