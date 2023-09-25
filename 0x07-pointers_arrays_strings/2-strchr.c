#include "main.h"
#include <stddef.h>

/**
 *_memcpy -   locates a character in a string
 *@s: the string to locate a char
 *@c: the char to locate
 *
 *Return:  pointer to the first occurrence of the character c in the string s
 */

char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p != '\0')
	{
		if (*p == c)
			return (p);
		p++;
	}

	return (NULL);
}
