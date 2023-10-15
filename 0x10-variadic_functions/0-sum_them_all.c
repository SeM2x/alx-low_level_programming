#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of args
 *
 * Return: sum of its params or 0.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	int i, sum;

	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
