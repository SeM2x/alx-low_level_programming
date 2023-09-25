#include "main.h"

/**
 *_strstr -  locates a substring
 *@haystack: the string
 *@needle: the substring
 *
 *Return: a pointer to the beginning of the located substring, or NULL.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n, *s;

	h = haystack;
	n = needle;

	while (*h != '\0')
	{
		if (*h == *n)
		{
			s = h;
			n = needle;
			while (*n != '\0')
			{
				if (*n != *s)
					break;
				n++;
				s++;
			}

			if (*n == '\0')
				return (h);
		}

		h++;
	}

	return (NULL);
}
