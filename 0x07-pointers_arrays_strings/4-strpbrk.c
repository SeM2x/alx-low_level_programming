#include "main.h"

/**
 *_strpbrk - searches a string for any of a set of bytes.
 *@s: the string
 *@accept: the substring
 *
 *Return: a pointer to the byte in s that matches one of
 *the bytes in accept, or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	char *p, *a;

	p = s;
	while (*p != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*p == *a)
				return (p);
			a++;
		}

		p++;
	}

	return (NULL);
}
