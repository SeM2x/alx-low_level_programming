#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the given string
 *
 * Return: int
*/

int _strlen(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i + 1);
}
