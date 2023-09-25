#include "main.h"

/**
 *_memcpy -   copies n bytes from memory area src to memory area dest.
 *@dest: the memory address to start filling
 *@src: the source to copy from
 *@n: the number of bytes to copy
 *
 *Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *d = dest;
	char *s = src;

	for (i = 0; i < n; i++)
	{
		*d = *s;
		d++;
		s++;
	}

	return (dest);
}
