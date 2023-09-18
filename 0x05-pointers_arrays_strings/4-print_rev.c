#include "main.h"

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
 *print_rev - prints a string in reverse followed by a new line
 *@s: the string to print
 *
 *Return: 0
 */

void print_rev(char *s)
{
	int i;

	i = _strlen(s) - 1;
	while (i > -1)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
