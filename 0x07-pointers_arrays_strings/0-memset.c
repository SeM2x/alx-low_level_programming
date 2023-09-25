#include "main.h"

/**
 *_memset -  fills the first n bytes of the memory with the constant byte b.
 *@s: the memory address to start filling.
 *@b: the char to fill
 *@n: the number of bytes.
 *
 *Return: a pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		*p = b;
		p++;
	}

	return (s);
}
