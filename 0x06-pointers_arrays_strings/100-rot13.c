#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 * @s: string
 *
 * Return: string.
 */

char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if ('z' - s[i] >= 13)
				s[i] += 13;
			else
				s[i] -= 13;
		}

		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			if ('Z' - s[i] >= 13)
				s[i] += 13;
			else
				s[i] -= 13;
		}
	}

	return (s);

}
