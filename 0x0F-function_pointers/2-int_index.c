#include <stddef.h>

/**
 * int_index - searches for an integer.
 * @array: the array
 * @size: the size of the array
 * @cmp: pointer to the function
 *
 * Return: index of the first match, -1 otherwise.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 1 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])
			return (i);
	}

	return (-1)


}
