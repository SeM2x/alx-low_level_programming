#include "main.h"

/**
 * is_separator - checks if a char is a separator
 * @c: a char
 *
 * Return: 1 or 0.
 */

int is_separator(char c)
{
	int separators[] = { ' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
	'(', ')', '{', '}' };
	int i = 0;
	int length = sizeof(separators) / sizeof(int);

	for (; i < length; i++)
	{
		if (separators[i] == c)
			return (1);
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: a string
 *
 * Return: string.
 */

char *cap_string(char *s)
{
	int i = 0;
	int diff = 'a' - 'A';
	
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] -= diff;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_separator(s[i]))
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] -= diff;
		}
	}

	return (s);
}
