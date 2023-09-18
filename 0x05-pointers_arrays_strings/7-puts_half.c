#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of the string
 * @str: the given string
 *
 * Return: void
*/

void puts_half(char *str)
{
	int i, length;

	length = strlen(str);
	for (i = ((length - 1) / 2) + 1; i < length; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
