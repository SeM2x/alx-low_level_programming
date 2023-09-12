#include "main.h"

/**
 * print_alphebet - prints lowecase alphabet
 *
 * Return: none
*/

void print_alphabet(void);
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
