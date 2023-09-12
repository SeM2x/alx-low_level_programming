#include "main.h"

/**
 * print_alphabet_x10 - prints lowecase alphebet 10 times
 *
 * Return: void
*/

void print_alphabet_x10(void)
{
	int count, i;

	count = 0;
	while (count < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
		count++;
	}
}
