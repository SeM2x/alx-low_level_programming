#include "main.h"
#include <stdlib.h>

/**
 *create_array -  creates an array of chars,
 *and initializes it with a specific char.
 *@c: the char to initialize the array with
 *@size: the size of the array
 *
 *Return: a pointer to the array, or NULL if it fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size < 1 || !arr)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
