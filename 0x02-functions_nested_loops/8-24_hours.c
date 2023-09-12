#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
*/

void jack_bauer(void)
{
	int h1, h2, m1, m2, max_h;

	for (h1 = 0; h1 < 3; h1++)
	{
		max_h = 10;
		if (h1 == 2)
			max_h = 4;
		for (h2 = 0; h2 < max_h; h2++)
		{
			for (m1 = 0; m1 < 6; m1++)
			{
				for (m2 = 0; m2 < 10; m2++)
				{
					_putchar(h1 + '0');
					_putchar(h2 + '0');
					_putchar(':');
					_putchar(m1 + '0');
					_putchar(m2 + '0');
					_putchar('\n');
				}
			}
		}
	}
}
