#include "main.h"
#include <stdlib.h>

/**
 *alloc_grid - returns a pointer to a 2 dimensional
 *array of integers.
 *@width: width of the grid
 *@height: height of the grid
 *
 *Return: pointer or NULL.
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width < 0 || height < 0)
		return (NULL);

	arr = malloc(height * (sizeof(int *)));
	if (!arr)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (!arr[i])
			return (NULL);
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}

