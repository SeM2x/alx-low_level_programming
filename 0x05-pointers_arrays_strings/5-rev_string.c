#include "main.h"
#include <stdlib.h>

/**
 *_strlen - returs the length of a string
 *@s: the given string
 *
 *Return: int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 *rev_string - reverses a string
 *@s: the string to reverse
 *
 *Return: void
 */

void rev_string(char *s)
{
	char tmp;
	int i, j, length;

	length = _strlen(s);
	j = 0;
	i = length - 1;
	while (i > length / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;

		i--;
		j++;
	}
}
