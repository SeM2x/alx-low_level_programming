#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *reverse_string - reverses a string.
 *@str: the string
 *
 *Return: void.
 */
void reverse_string(char *str)
{
	int len, i;
	char temp;

	len = strlen(str);
	for (i = 0; i < len / 2; i++)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
}

/**
 *mul - multiplies two positive numbers represnted as strings.
 *@a: the 1st number
 *@b: the 2nt number
 *
 *Return: multiplication of the two numbers.
 */
char *mul(char *a, char *b)
{
	char *product;
	int i, j, n, m, carry, productIndex;

	if (a[0] == '0' || b[0] == '0')
	{
		printf("0\n");
		return (0);
	}

	m = strlen(a) - 1, n = strlen(b) - 1, carry = 0;
	product = malloc(strlen(a) * strlen(b));
	if (product == NULL)
		return (NULL);
	productIndex = 0;

	for (i = 0; i <= m + n || carry; ++i)
	{
		for (j = (i > n ? i - n : 0); j <= (i < m ? i : m); ++j)
		{
			carry += (a[m - j] - '0') * (b[n - i + j] - '0');
		}

		product[productIndex++] = (carry % 10) + '0';
		carry /= 10;
	}

	reverse_string(product);
	product[productIndex] = '\0';

	return (product);
}

/**
 *is_number - checks is a string is representing a number
 *@str: the string
 *
 *Return: 1 if true, 0 otherwise.
 */
int is_number(char *str)
{
	while (*str != '\0')
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}

	return (1);
}

/**
 *main - multiplies two positive numbers.
 *@argc: args count
 *@argv: args array
 *
 *Return: 0.
 */
int main(int argc, char *argv[])
{
	char *res;

	if (argc != 3 || !is_number(argv[1]) || !is_number(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	res = mul(argv[1], argv[2]);
	if (!res)
	{
		printf("Error\n");
		exit(98);
	}
	printf("%s\n", res);
	return (0);
}
