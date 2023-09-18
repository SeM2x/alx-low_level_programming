#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *getsign - sign a given integer represended as string
 *@s: the string
 *
 *Return: string.
 */

char *getsign(char *s)
{
	int i, j, length, count;
	char *signedStr;

	length = strlen(s);
	signedStr = (char *) malloc(length + 1);
	count = 0;
	j = 1;

	for (i = 0; i < length; i++)
	{
		if (!(s[i] == '+' || s[i] == '-'))
		{
			signedStr[j] = s[i];
			j++;
		}

		if (s[i] == '-')
		{
			count++;
		}
	}

	if (count % 2 != 0)
		signedStr[0] = '-';
	else
		signedStr[0] = '+';

	return (signedStr);
}

/**
 *format - keep the first number in the given string
 *@s: the string
 *
 *Return: string.
 */

char *format(char *s)
{
	int i, j, length;
	char *formatted;

	length = strlen(s);
	formatted = (char *) malloc(length + 1);
	j = 0;
	for (i = 0; i < length; i++)
	{
		if ((s[i] >= '0' && s[i] <= '9') || s[i] == '+' || s[i] == '-')
		{
			formatted[j] = s[i];
			j++;
		}

		if ((s[i] >= '0' && s[i] <= '9') && (s[i + 1] < '0' || s[i + 1] > '9'))
			break;
	}

	formatted = getsign(formatted);
	return (formatted);
}

/**
 *_atoi - converts a string to an integer
 *@s: the string to convert
 *
 *Return: integer.
 */

int _atoi(char *s)
{
	int num, i, length;

	s = format(s);
	length = strlen(s);
	num = 0;
	for (i = 1; i < length; i++)
	{
		num = num * 10 + (s[i] - '0');
	}

	if (s[0] == '-')
		return (-num);
	return (num);
}
