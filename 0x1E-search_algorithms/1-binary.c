#include "search_algos.h"

/**
 * print_array - prints an array
 *
 * @array: a pointer to the first element of the array to search in
 * @s: start index
 * @e: end index
 */
void print_array(int *array, int s, int e)
{
	int i;

	if (s != e)
	{
		printf("Searching in array: ");

		for (i = s; i < e; i++)
		{
			printf("%d", array[i]);
			if (i != e - 1)
				printf(", ");
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
	print_array(array, 0, size);
	while (l <= r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			print_array(array, m + 1, r + 1);
			l = m + 1;
		}
		else if (array[m] > value)
		{
			print_array(array, l, m);
			r = m - 1;
		}
		else
			return (m);
	}

	return (-1);
}
