#include "main.h"

/**
 * _abs - calculates the absolute value of a number
 * @n: the given number
 *
 * Return: n or -n
*/

int _abs(int n)
{
	if (n < 0)
		return (-1 * n);
	return (n);
}
