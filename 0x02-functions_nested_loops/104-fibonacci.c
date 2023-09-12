#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * addStrings - adds strings
 * @num1: 1st str
 * @num2: 2nd str
 *
 * Return: added str
*/

char *addStrings(char *num1, char *num2)
{
	int len1 = strlen(num1);
	int len2 = strlen(num2);
	int maxlen = len1 > len2 ? len1 : len2;
	int carry = 0;
	char *result = (char *) malloc((maxlen + 2) * sizeof(char));
	int resultIndex = 0;
	int i, j;

	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? num1[i] - '0' : 0;
		int digit2 = (j >= 0) ? num2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;
		sum %= 10;

		result[resultIndex++] = (char)(sum + '0');
	}

	result[resultIndex] = '\0';

	int left, right;

	left = 0;
	right = resultIndex - 1;

	while (left < right)
	{
		char temp = result[left];

		result[left] = result[right];
		result[right] = temp;
		left++;
		right--;
	}

	return (result);
}

/**
 * main - fibonacci
 *
 * Return: 0
*/

int main(void)
{
	char i[25], j[25], x[25];
	int count;

	count = 0;
	strcpy(i, "1");
	strcpy(j, "2");
	while (count < 97)
	{
		printf("%s, ", i);
		strcpy(x, i);
		strcpy(i, j);
		strcpy(j, addStrings(j, x));
		count++;
	}

	printf("%s\n", i);
	return (0);
}
