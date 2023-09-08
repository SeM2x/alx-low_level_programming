#include<stdio.h>
#include<stdlib.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 *
 * Return: 0
*/

int main(void)
{
	int i, j, k, l;

	for (i = 48; i < 58; i++)
	{
		for (j = 48; j < 58; j++)
		{
			for (k = i; k < 58; k++)
			{
				if (k == i)
					l = j + 1;
				else
					l = 48;
				for (l; l < 58; l++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i == 57 && j == 56)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
