#include "main.h"

/**
 *infinite_add -  add two integer
 *@n1: integer 1
 *@n2: integer 2
 *@r: buffer
 *@size_r: size of buffer
 *
 *Return: void.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);

	int carry = 0;
	int maxLen = len1 > len2 ? len1 : len2;

	if (size_r <= maxLen + 1)
		return (0);

	int i = len1 - 1;
	int j = len2 - 1;
	int k = 0;

	while (i >= 0 || j >= 0 || carry > 0)
	{
		int num1 = (i >= 0) ? n1[i] - '0' : 0;
		int num2 = (j >= 0) ? n2[j] - '0' : 0;

		int sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';
		k++;

		i--;
		j--;
	}

	r[k] = '\0';

	for (int start = 0, end = k - 1; start < end; start++, end--)
	{
		char temp = r[start];

		r[start] = r[end];
		r[end] = temp;
	}

	return (r);
}
