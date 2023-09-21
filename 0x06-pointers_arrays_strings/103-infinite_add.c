#include "main.h"
#include <string.h>

/**
 *reverse_string -  add two integer
 *@str: string
 *
 *Return: void.
 */

void reverse_string(char *str)
{
	int start = 0;
	int end = strlen(str) - 1;

	while (start < end)
	{
		char temp = str[start];

		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
}

/**
 *infinite_add -  add two integer
 *@n1: integer 1
 *@n2: integer 2
 *@r: buffer
 *@size_r: size of buffer
 *
 *Return: string.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1, len2, carry, maxLen, i, j, k, num1, num2, sum;

	len1 = strlen(n1);
	len2 = strlen(n2);

	carry = 0;
	maxLen = len1 > len2 ? len1 : len2;

	if (size_r <= maxLen + 1)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		num1 = (i >= 0) ? n1[i] - '0' : 0;
		num2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = num1 + num2 + carry;
		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k++;

		i--;
		j--;
	}

	r[k] = '\0';

	reverse_string(r);

	return (r);
}
