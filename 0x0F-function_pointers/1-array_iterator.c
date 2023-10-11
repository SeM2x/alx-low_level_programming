#include <stddef.h>

/**
 * array_iterator - executes a function given as
 * a parameter on each element of an array
 * @array: the array
 * @size: the size of the array
 * @action: pointer to the function
 *
 * Return: Void.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
