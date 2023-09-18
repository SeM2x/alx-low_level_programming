#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string
 * @str: the string
 *
 * Return: void
*/

void puts2(char *str)
{
	int i;

	for (i = 0; i < strlen(str); i++)
	{
		if (i % 2)
			_putchar(str[i]);
	}
	_putchar('\n');
}
