#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main -  prints the minimum number of coins to make change
 * for an amount of money.
 * @argc: args count
 * @argv: args array
 *
 * Return: 0
*/

int main(int argc, char *argv[])
{
	int num, ret;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	ret = 0;

	while (num > 0)
	{
		if (num / 25 > 0)
			num -= 25;
		else
		{
			if (num / 10 > 0)
				num -= 10;
			else
			{
				if (num / 5 > 0)
					num -= 5;
				else
				{
					if (num / 2 > 0)
						num -= 2;
					else
						num--;
				}
			}
		}

		ret++;
	}

	printf("%d\n", ret);
	return (0);
}
