#include <stdlib.h>
#include <string.h>

/**
 *_realloc -  reallocates a memory block using malloc and free
 *@ptr: pointer to the memory previously allocated
 *@old_size: the size, in bytes, of the allocated space for ptr
 *@new_size: the new size, in bytes of the new memory block
 *
 *Return: pointer to the allocated memory..
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (ptr != NULL)
	{
		memcpy(new_ptr, ptr, old_size);
		free(ptr);
	}

	return (new_ptr);
}
