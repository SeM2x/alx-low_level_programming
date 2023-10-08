#include <stdlib.h>

/**
 *_calloc - allocates memory for an array, using malloc.
 *@nmemb: the number of elements
 *@size: the size of each element
 *
 *Return: pointer to the allocated memory..
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	memset(ptr, 0, total_size);

	return (ptr);
}
