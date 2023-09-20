#include "main.h"

/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@s: an string
 *
 *Return: nothing.
 */

char *string_toupper(char *s)
{
	int i, diff;

	diff = 'a' - 'A';
	for (i = 1; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= diff;
	}

	return (s);
}
