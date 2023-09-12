#include "main.h"

/**
 * times_table - prints the times table
 *
 * Return: void
*/

void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j > 0)
				_putchar(' ');

			if (j * i < 10)
			{
				if (j > 0)
					_putchar(' ');
				_putchar(j * i + '0');
			}
			else
			{
				_putchar(j * i / 10 + '0');
				_putchar(j * i % 10 + '0');
			}
			if (j < 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}
