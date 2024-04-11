#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: a pointer to the first element of the array to search in
 * @m: start index if r != 0, end index otherwise
 * @r: end index or 0
 */
void print_array(int *array, int m, int r)
{
	int i;

	if (m != r)
	{
		printf("Searching in array: ");
		if (r)
		{
			for (i = m + 1; i < r + 1; i++)
			{
				printf("%d", array[i]);
				if (i != r)
					printf(", ");
			}
		}
		else
		{
			for (i = 0; i < m; i++)
			{
				printf("%d", array[i]);
				if (i != m - 1)
					printf(", ");
			}
		}
		printf("\n");
	}
}

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int l = 0, r = size - 1, m;

	if (!array || !size)
		return (-1);

	m = size;
	print_array(array, m, 0);
	while (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			print_array(array, m, r);
			l = m + 1;
		}
		else if (array[m] > value)
		{
			print_array(array, m, 0);
			r = m - 1;
		}
		else
			return (m);
	}

	return (-1);
}
