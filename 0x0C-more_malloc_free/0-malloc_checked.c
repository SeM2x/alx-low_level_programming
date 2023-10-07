#include <stdlib.h>

/**
 *malloc_checked - allocates memory
 *@b: size to allocate
 *
 *Return: a pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b * sizeof(void));
	if (!ptr)
	{
		exit(98);
	}

	return (ptr);
}
