#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 *getRandomChar - generates random chars
 *
 *Return: char.
 */

char getRandomChar(void)
{
	int lower, upper, digit, random;

	lower = 'a' + rand() % 26;
	upper = 'A' + rand() % 26;
	digit = '0' + rand() % 10;
	random = rand() % 3;
	switch (random)
	{
		case 0:
			return (lower);
		case 1:
			return (upper);
		case 2:
			return (digit);
		default:
			return (-1);
	}
}

/**
 *main - generates random keys
 *
 *Return: 0.
 */

int main(void)
{
	int i, currSum, remSum;
	char pwd[50];

	srand(time(NULL));
	currSum = 0;
	i = 0;
	while (currSum < 2772)
	{
		remSum = 2772 - currSum;
		if (remSum < 126)
		{
			pwd[i] = remSum;
			currSum += remSum;
		}
		else
		{
			pwd[i] = getRandomChar();
			currSum += pwd[i];
		}

		i++;
	}

	pwd[i] = '\0';
	printf("%s", pwd);

	return (0);
}
