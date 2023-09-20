#include "main.h"

/**
 *reverse_array - reverses an array
 *@a: an array of integers
 *@n: the number of elements
 *
 *Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	i = 0;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
		i++;
	}
}
