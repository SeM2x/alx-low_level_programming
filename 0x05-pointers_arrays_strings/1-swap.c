#include "main.h"

/**
 * swap_int - swap two ints
 * @a: 1st int
 * @b: 2nd int
 *
 * Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
