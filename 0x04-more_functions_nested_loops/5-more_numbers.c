#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: void
*/

void more_numbers(void)
{
	int i, j, count;

	count = 0;
	while (count < 10)
	{
		for (i = '0'; i <= '1'; i++)
		{
			for (j = '0'; j <= '9'; j++)
			{
				if (i > '0')
				{
					if (j >= '5')
						break;
					_putchar(i);
				}
				_putchar(j);
			}
		}
		_putchar('\n');
		count++;
	}
}
