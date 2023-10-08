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

	if (nmemb < 1 || size < 1)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	return (ptr);
}
