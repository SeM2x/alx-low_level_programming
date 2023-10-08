#include <stdlib.h>

/**
 *array_range -  creates an array of integers.
 *@min: the number of elements
 *@max: the size of each element
 *
 *Return: pointer to the allocated memory..
 */
int *array_range(int min, int max)
{
	int *ptr, *temp, i;

	if (max < min)
		return (NULL);
	ptr = malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;

	for (i = min; i < max + 1; i++)
	{
		*temp = i;
		temp++;
	}

	return (ptr);
}
